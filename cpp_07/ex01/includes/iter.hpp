#pragma once

#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F func) {
    for (size_t i = 0; i < length; ++i) {
        func(array[i]);
    }
}

template <typename T>
void printElement(T& element) {
    std::cout << element << std::endl;
}