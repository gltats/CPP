#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include <exception>

//container
#include <map>

class BitcoinExchange
{
    public:
        //canonical form
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange &other);
        BitcoinExchange &operator=(const BitcoinExchange &other);

        //methods
        void loadData(const std::string& filename);
        void checkInputFile(const std::string& filename);
        void fillData(const std::string fillMap);
        void checkValues(float value);
        void checkDate(std::string date);
        int checkLeapYear(int year);
        int checkMonth(int month);
        int checkDay(int year, int month, int day);
        void calculateValue();
        void printData();

    
    private:
        std::map<std::string, float> btcPrice;
        // btcPrice["2021-01-01"] = 1000.0;
        //key = date, value = exchange rate
        int year;
        int month;
        int day;

        struct
        {
            float value;
            std::string date;
        } GivenData;
};
