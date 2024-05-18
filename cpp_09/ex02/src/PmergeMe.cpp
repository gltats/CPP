#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : _dequeTime(0), _vectorTime(0) {}

PmergeMe::PmergeMe(std::string input) : _input(input), _dequeTime(0), _vectorTime(0) 
{
    std::stringstream ss(input);
    int num;
    while (ss >> num) 
    {
        if (num < 0) 
        {
            throw std::runtime_error("Error: negative number");
        }
        _deque.push_back(num);
        _vector.push_back(num);
    }    
}

PmergeMe::~PmergeMe() {}

void PmergeMe::merge()
{
    clock_t start = clock();
    std::list<int> lst(_deque.begin(), _deque.end());
    ford_johnson(lst);
    _deque = std::deque<int>(lst.begin(), lst.end());
    _dequeTime = static_cast<double>(clock() - start) / (double)CLOCKS_PER_SEC;

    start = clock();
    lst = std::list<int>(_vector.begin(), _vector.end());
    ford_johnson(lst);
    _vector = std::vector<int>(lst.begin(), lst.end());
    _vectorTime = static_cast<double>(clock() - start) / (double)CLOCKS_PER_SEC; // CLOCKS_PER_SEC is * 1000000
}

void PmergeMe::print()
{
    std::cout << "Before: " << _input << std::endl;
    std::cout << "After: ";
    std::copy(_deque.begin(), _deque.end(), std::ostream_iterator<int>(std::cout, " "));
    std::cout << std::endl;
    std::cout << "Time to process a range of " << _deque.size() << " elements with std::deque: " << std::fixed << _dequeTime << " us" << std::endl;
    std::cout << "Time to process a range of " << _vector.size() << " elements with std::vector: " << std::fixed << _vectorTime << " us" << std::endl;
}
