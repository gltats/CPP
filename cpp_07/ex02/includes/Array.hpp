#pragma once

#include <iostream>
#include <string>
#include <sstream>
#include <exception>

template <typename T>
class Array {
private:
    T* array;
    unsigned int size;

public:
    Array() : array(NULL), size(0) {}

    Array(unsigned int n) : array(new T[n]()), size(n) {}

    Array(const Array& other) : array(new T[other.size]), size(other.size) {*(this) = other;}

    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] array;
            array = new T[other.size];
            size = other.size;
            for (unsigned int i = 0; i < size; ++i) {
                array[i] = other.array[i];
            }
        }
        return *this;
    }

    T& operator[](unsigned int i) {
        if (i >= size) {
            throw std::exception();
        }
        return array[i];
    }
    const T &operator[](unsigned int i) const
        {
            if (i >= size)
                throw std::exception();
            return (array[i]);   
        }
    unsigned int getSize() const {
        return size;
    }

    ~Array() {
        delete[] array;
    }
};