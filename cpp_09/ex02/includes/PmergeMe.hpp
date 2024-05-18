#pragma once

#include <iostream>
#include <algorithm>
#include <iterator>
#include <exception>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <list>

// containers
#include <deque>
#include <vector>

class PmergeMe
{
    public:
        PmergeMe();
        PmergeMe(std::string input);
        ~PmergeMe();
        void merge();
        void print();
    private:
        std::deque<int> _deque;
        std::vector<int> _vector;
        std::string _input;
        double _dequeTime;
        double _vectorTime;
};

template <typename T>
void ford_johnson(std::list<T>& lst) {
    if (lst.size() < 2) {
        return;
    }

    // Create a new list with the first two elements, sorted
    typename std::list<T>::iterator it = lst.begin();
    std::list<T> sorted;
    if (*it < *(++it)) {
        sorted.push_back(*lst.begin());
        sorted.push_back(*it);
    } else {
        sorted.push_back(*it);
        sorted.push_back(*lst.begin());
    }

    // Insert the remaining elements
    for (++it; it != lst.end(); ++it) {
        typename std::list<T>::iterator pos;
        for (pos = sorted.begin(); pos != sorted.end(); ++pos) {
            if (*it < *pos) {
                break;
            }
        }
        sorted.insert(pos, *it);
    }

    // Replace the original list with the sorted list
    lst.swap(sorted);
}