#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : _str(""), _c(0), _i(0), _f(0), _d(0) {}

ScalarConverter::ScalarConverter(const ScalarConverter &other) : _str(other._str), _c(other._c), _i(other._i), _f(other._f), _d(other._d) 
{
    *this = other;
}

ScalarConverter::~ScalarConverter() {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &other)
{
    if (this != &other)
    {
        _str = other._str;
        _c = other._c;
        _i = other._i;
        _f = other._f;
        _d = other._d;
    }
    return *this;
}

void ScalarConverter::convert(const std::string &str)
{
    // Create a copy of str and remove 'f' character from the copy
    std::string strCopy = str;
    strCopy.erase(std::remove(strCopy.begin(), strCopy.end(), 'f'), strCopy.end());

    // Convert to int
    std::stringstream ss(strCopy);
    int i;
    if (ss >> i)
    {
        char c = static_cast<char>(i);
        if (std::isprint(c))
            std::cout << "char: '" << c << "'" << std::endl;
        else
            std::cout << "char: Non displayable" << std::endl;
        std::cout << "int: " << i << std::endl;
    }
    else
    {
        std::cout << "char: impossible" << std::endl;
        std::cout << "int: impossible" << std::endl;
    }

    // Convert to float
    std::stringstream ssFloat(strCopy);
    float f;
    if (ssFloat >> f)
        std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
    else
        std::cout << "float: impossible" << std::endl;

    // Convert to double
    std::stringstream ssDouble(strCopy);
    double d;
    if (ssDouble >> d)
        std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
    else
        std::cout << "double: impossible" << std::endl;
}

