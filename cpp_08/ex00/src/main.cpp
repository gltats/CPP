#include "easyfind.hpp"

int main() 
{
    std::vector<int> numbers;
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);
    numbers.push_back(5);

    try {
        std::cout << "Found: " << easyfind(numbers, 3) << std::endl;
        std::cout << "Found: " << easyfind(numbers, 6) << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Number not found" << std::endl;
    }

    return 0;
}