#pragma once

#include <iostream>
#include <iomanip>
#include <sstream>
#include <algorithm>

class ScalarConverter
{
    public:
        static void convert(const std::string &str);

    private:
        ScalarConverter();
        ScalarConverter(const ScalarConverter &other);
        ~ScalarConverter();
        ScalarConverter &operator=(const ScalarConverter &other);

        std::string _str;
        char _c;
        int _i;
        float _f;
        double _d;
};
