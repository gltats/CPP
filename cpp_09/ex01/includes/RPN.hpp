#pragma once

#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include <iterator>
#include <exception>

// container
#include <stack>

class RPN
{
    public:
        RPN();
        RPN(std::string imput);
        ~RPN();
        int calculate();

    private:
        std::stack<int> _stack;
        std::string _input;
};