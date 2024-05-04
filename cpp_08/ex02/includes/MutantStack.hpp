#pragma once

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        // Canonical form
        MutantStack() : std::stack<T>() {}
        MutantStack(const MutantStack &other) : std::stack<T>(other) {}
        MutantStack &operator=(const MutantStack &other)
        {
            if (this != &other)
                std::stack<T>::operator=(other);
            return *this;
        }
        virtual ~MutantStack() {}

        // Iterator
        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin()
        {
            return std::stack<T>::c.begin();
        }

        iterator end()
        {
            return std::stack<T>::c.end();
        }

        // Reverse iterator
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

        reverse_iterator rbegin()
        {
            return std::stack<T>::c.rbegin();
        }

        reverse_iterator rend()
        {
            return std::stack<T>::c.rend();
        }

        // Const iterator
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        const_iterator cbegin() const
        {
            return std::stack<T>::c.cbegin();
        }

        const_iterator cend() const
        {
            return std::stack<T>::c.cend();
        }
};