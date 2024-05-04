#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int n) : size(n) {}

Span::Span(const Span &other) : numbers(other.numbers), size(other.size) {}

Span &Span::operator=(const Span &other)
{
    if (this == &other)
        return *this;
    numbers = other.numbers;
    size = other.size;
    return *this;
}

Span::~Span() {}

void Span::addNumber(int number)
{
    if (numbers.size() >= size)
        throw NotEnoughNumbersException();
    numbers.push_back(number);
}

int Span::shortestSpan()
{
    if (numbers.size() <= 1)
        throw std::exception();
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    int min = sorted[1] - sorted[0];
    for (size_t i = 2; i < sorted.size(); i++)
    {
        int diff = sorted[i] - sorted[i - 1];
        if (diff < min)
            min = diff;
    }
    return (min);
}

int Span::longestSpan()
{
    if (numbers.size() <= 1)
        throw NotEnoughNumbersException();
    std::vector<int> sorted(numbers);
    std::sort(sorted.begin(), sorted.end());
    return sorted.back() - sorted.front();
}

