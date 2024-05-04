#include "Span.hpp"

int main()
{
    Span sp = Span(5);

    std::cout << "Adding numbers 6, 3, 17, 9, 11 to the Span." << std::endl;
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    try
    {
        std::cout << "The shortest span in the Span is: " << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "The longest span in the Span is: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }


    std::cout << "Creating a vector with numbers from 1 to 10." << std::endl;
    std::vector<int> numbers;
    for (int i = 1; i <= 10; i++)
    {
        numbers.push_back(i);
    }

    std::cout << "Creating a new Span with size 10 and adding the numbers from the vector to it." << std::endl;
    Span sp2 = Span(10);
    sp2.addRange(numbers.begin(), numbers.end());

    try
    {
        std::cout << "The shortest span in the Span is: " << sp.shortestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    try
    {
        std::cout << "The longest span in the Span is: " << sp.longestSpan() << std::endl;
    }
    catch (const std::exception &e)
    {
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return 0;
}