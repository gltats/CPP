#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);

        void convert(const std::string &str);

    private:
        std::string _str;
        char _c;
        int _i;
        float _f;
        double _d;
};
