#pragma once

#include <vector>
#include <algorithm>
#include <exception>
#include <iostream>

class Span
{
private:
    std::vector<int> numbers;
    unsigned int size;

public:
    // Canonical form
    Span();
    Span(unsigned int n);
    Span(const Span &other);
    Span &operator=(const Span &other);
    ~Span();

    // Exceptions
    class NotEnoughNumbersException : public std::exception
    {
    public:
        const char *what() const throw()
        {
            return "Not enough numbers to calculate the span.";
        }
    };

    void addNumber(int number);
    int shortestSpan();
    int longestSpan();

    // Utils
    template <typename Iterator>
    void addRange(Iterator begin, Iterator end)
    {
        while (begin != end)
        {
            addNumber(*begin);
            ++begin;
        }
    }
};