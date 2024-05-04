#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() : btcPrice(), GivenData()
{
    this->GivenData.value = 0;
    this->GivenData.date = "";
    this->year = 0;
    this->month = 0;
    this->day = 0;

    // load data
    loadData("csv/data.csv");
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) : btcPrice(other.btcPrice), GivenData(other.GivenData)
{
    this->GivenData.value = other.GivenData.value;
    this->GivenData.date = other.GivenData.date;

    std::map<std::string, float>::const_iterator it;
    for (it = other.btcPrice.begin(); it != other.btcPrice.end(); it++)
    {
        this->btcPrice[it->first] = it->second;
    }
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other)
{
    if (this != &other)
    {
        this->btcPrice = other.btcPrice;
        this->GivenData.value = other.GivenData.value;
        this->GivenData.date = other.GivenData.date;

        std::map<std::string, float>::const_iterator it;
        for (it = other.btcPrice.begin(); it != other.btcPrice.end(); it++)
        {
            this->btcPrice[it->first] = it->second;
        }
    }
    return *this;
}

void BitcoinExchange::loadData(const std::string &filename)
{
    std::ifstream data(filename.c_str());
    if (!data.is_open())
    {
        throw std::invalid_argument("CSV File cannot be opened.");
    }
    std::string line;
    while (std::getline(data, line))
    {
        fillData(line);
    }
    data.close();
}

void BitcoinExchange::checkInputFile(const std::string &filename)
{
    std::ifstream file(filename.c_str());
    if (!file.is_open())
    {
        throw std::invalid_argument("File cannot be opened.");
    }
    std::string line;
    getline(file, line);
    if (line.empty())
    {
        throw std::invalid_argument("File is empty.");
    }
    if (line != "date | value")
    {
        throw std::invalid_argument("Invalid file header.");
    }
    // check if second line is empty
    if (!getline(file, line))
    {
        throw std::invalid_argument("File does not have values.");
    }
    // Process the second line here
    try
    {
        std::string date, value;
        std::istringstream iss(line);
        getline(iss, date, '|');
        getline(iss, value, '|');
        checkDate(date);

        GivenData.date = date;

        std::istringstream valueStream(value);
        float floatValue;
        if (!(valueStream >> floatValue))
        {
            std::cout << "Error: Invalid line" << std::endl;
        }
        checkValues(floatValue);
        GivenData.value = floatValue;
        calculateValue();
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    // rest of lines
    while (getline(file, line))
    {
        try
        {
            std::string date, value;
            std::istringstream iss(line);
            if (line.find_first_not_of("0123456789.-| \t\n") != std::string::npos)
            {
                throw std::invalid_argument("Error: Invalid line");
            }
            getline(iss, date, '|');
            getline(iss, value, '|');
            checkDate(date);

            // std::istringstream issDate(date);
            // issDate >> GivenData.date;
            GivenData.date = date;

            std::istringstream valueStream(value);
            float floatValue;
            if (!(valueStream >> floatValue))
            {
                std::cout << "Invalid value format." << std::endl;
            }
            checkValues(floatValue);
            GivenData.value = floatValue;
            calculateValue();
        }
        catch (const std::exception &e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    file.close();
}

void BitcoinExchange::fillData(const std::string fillMap)
{
    int i = 0;
    std::string key;
    std::stringstream ss(fillMap);
    std::string token;
    while (getline(ss, token, ','))
    {
        if (i == 0)
        {
            std::istringstream iss(token);
            iss >> GivenData.date;
            i = 1;
        }
        else
            GivenData.value = atof(token.c_str());
    }
    std::ostringstream oss;
    oss << GivenData.date;
    std::string dateStr = oss.str();

    this->btcPrice.insert(std::make_pair(dateStr, GivenData.value));
}

void BitcoinExchange::checkValues(float value)
{
    if (value < 0)
    {
        throw std::invalid_argument("Error: not a positive number.");
    }
    else if (value > 1000)
    {
        throw std::invalid_argument("Error: too large a number.");
    }
}

void BitcoinExchange::checkDate(std::string date)
{
    std::string year, month, day;
    std::istringstream iss(date);
    getline(iss, year, '-');
    getline(iss, month, '-');
    getline(iss, day, '-');

    int yearInt, monthInt, dayInt;
    std::istringstream(year) >> yearInt;
    std::istringstream(month) >> monthInt;
    std::istringstream(day) >> dayInt;

    checkLeapYear(yearInt);
    checkMonth(monthInt);
    checkDay(yearInt, monthInt, dayInt);
}

int BitcoinExchange::checkLeapYear(int year)
{
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
}

int BitcoinExchange::checkMonth(int month)
{
    if (month < 1 || month > 12)
    {
        throw std::invalid_argument("Error: bad input => " + GivenData.date);
    }
    return month;
}

int BitcoinExchange::checkDay(int year, int month, int day)
{
    int leapYear = checkLeapYear(year);
    if (day < 1 || day > 31)
    {
        throw std::invalid_argument("Error: bad input => " + GivenData.date);
    }
    if (month == 2)
    {
        if (day > 28 + leapYear)
        {
            throw std::invalid_argument("Error: bad input => " + GivenData.date);
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day > 30)
        {
            throw std::invalid_argument("Error: bad input => " + GivenData.date);
        }
    }
    return day;
}

void BitcoinExchange::calculateValue()
{
    std::map<std::string, float>::iterator it;
    // find first date that is the same or cames after the given date
    std::ostringstream dateStream;
    dateStream << GivenData.date;
    it = this->btcPrice.lower_bound(dateStream.str());
    if (it == btcPrice.end())
    {
        // decrement to the last element and print the value
        it--;
        double mult = GivenData.value * (*it).second;
        // std::cout << "here" << mult << std::endl;
        // PRINT IT: 2011-01-03 => 3 = 0.9
        std::cout << std::setprecision(7) << GivenData.date << " => " << std::setprecision(7) << GivenData.value << " = " << std::setprecision(7) << mult << std::endl;
    }
    // if its earlier than the first start date print error
    else if (it == btcPrice.begin())
    {
        std::cout << "No data" << std::endl;
    }
    else
    {
        // get the previous date
        std::ostringstream dateStream;
        dateStream << GivenData.date;
        if ((*it).first != dateStream.str())
            it--;
        double mult = GivenData.value * (*it).second;
        // std::cout << "value1" << GivenData.value << std::endl;
        // std::cout << "value2" << (*it).second << std::endl;
        // std::cout << "here" << mult << std::endl;

        // PRINT IT: 2011-01-03 => 3 = 0.9
        std::cout << std::setprecision(7) << GivenData.date << " => " << std::setprecision(7) << GivenData.value << " = " << std::setprecision(7) << (mult) << std::endl;
    }
}