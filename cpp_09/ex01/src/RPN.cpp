#include "RPN.hpp"

RPN::RPN() : _stack()
{
}

RPN::RPN(std::string input) : _stack(), _input(input)
{}

RPN::~RPN()
{}

int RPN::calculate()
{
    std::stringstream iss(_input);
    std::string token;
    while (iss >> token) {
        if (std::isdigit(token[0])) {
            int value;
            std::stringstream ss(token);
            ss >> value;
            _stack.push(value);
        } else {
            if (_stack.size() < 2) {
                throw std::runtime_error("Error: bad imput or not enough values");
            }
            int rhs = _stack.top(); _stack.pop();
            int lhs = _stack.top(); _stack.pop();

            switch (token[0]) {
                case '+': _stack.push(lhs + rhs); break;
                case '-': _stack.push(lhs - rhs); break;
                case '*': _stack.push(lhs * rhs); break;
                case '/': 
                    if (rhs == 0) {
                        throw std::runtime_error("Error: division by zero");
                    }
                    _stack.push(lhs / rhs); 
                    break;
                default: 
                    throw std::runtime_error("Error: invalid operator");
            }
        }
    }
    if (_stack.size() != 1) {
        throw std::runtime_error("Error: too many values");
    }
    return _stack.top();
}