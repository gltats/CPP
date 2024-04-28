#include "Array.hpp"

int main(void)
{
    std::cout << "_____________Test 1: Array of int:_____________" << std::endl;
    Array<int> intArray(5);
    for (unsigned int i = 0; i < intArray.getSize(); ++i)
    {
        intArray[i] = i;
        std::cout << intArray[i] << std::endl;
    }

    std::cout << "_____________Test 2: Array of float:_____________" << std::endl;
    Array<float> floatArray(5);
    for (unsigned int i = 0; i < floatArray.getSize(); ++i)
    {
        floatArray[i] = i + 0.5f;
        std::cout << floatArray[i] << std::endl;
    }

    std::cout << "_____________Test 3: Array of double:_____________" << std::endl;
    Array<double> doubleArray(5);
    for (unsigned int i = 0; i < doubleArray.getSize(); ++i)
    {
        doubleArray[i] = i + 0.5;
        std::cout << doubleArray[i] << std::endl;
    }

    std::cout << "_____________Test 4: Array of string:_____________" << std::endl;
    Array<std::string> stringArray(5);
    for (unsigned int i = 0; i < stringArray.getSize(); ++i)
    {
        std::stringstream ss;
        ss << i;
        stringArray[i] = "string" + ss.str();
        std::cout << stringArray[i] << std::endl;
    }

    std::cout << "_____________Test 5: Array of char:_____________" << std::endl;
    Array<char> charArray(5);
    for (unsigned int i = 0; i < charArray.getSize(); ++i)
    {
        charArray[i] = 'a' + i;
        std::cout << charArray[i] << std::endl;
    }

    std::cout << "_____________Test 6: Array of bool:_____________" << std::endl;
    Array<bool> boolArray(5);
    for (unsigned int i = 0; i < boolArray.getSize(); ++i)
    {
        boolArray[i] = i % 2;
        std::cout << boolArray[i] << std::endl;
    }

    std::cout << "_____________Test 7: Failed Array:_____________" << std::endl;
    try
    {
        Array<int> explicitFailArray(5);
        std::cout << "Accessing index 5 of an array of size 5 (valid indices are 0-4)" << std::endl;
        explicitFailArray[5] = 10;
        //explicitFailArray[4] = 2;
    }
    catch (std::exception &e)
    {
        std::cout << "Exception caught, out of bounds" << std::endl;
    }

    return 0;
}