#include "iter.hpp"

int main(void) 
{
    std::cout << "_____________Test 1: intArray:_____________" << std::endl;
    int intArray[] = {1, 2, 3, 4, 5};
    iter(intArray, 5, printElement<int>);

    std::cout << "_____________Test 2: charArray:_____________" << std::endl;
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    iter(charArray, 5, printElement<char>);

    std::cout << "_____________Test 3: stringArray:_____________" << std::endl;
    std::string stringArray[] = {"I'm on a seafood diet—I see food, I eat it.",
                                 "If you see a crime at an Apple Store, does that make you an iWitness?", 
                                 "I’d tell you a construction joke, but I’m still working on it.", 
                                 "Elevator music bothers me on many levels.", 
                                 "Why did the programmer quit his job? He didn't get arrays."
                                 };
    iter(stringArray, 5, printElement<std::string>);

    std::cout << "_____________Test 4: doubleArray:_____________" << std::endl;
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    iter(doubleArray, 5, printElement<double>);

    std::cout << "_____________Test 5: floatArray:_____________" << std::endl;
    float floatArray[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    iter(floatArray, 5, printElement<float>);

    std::cout << "_____________Test 6: longArray:_____________" << std::endl;
    long longArray[] = {1, 2, 3, 4, 5};
    iter(longArray, 5, printElement<long>);

    std::cout << "_____________Test 8: boolArray:_____________" << std::endl;
    bool boolArray[] = {true, false, true, false, true};
    iter(boolArray, 5, printElement<bool>);

    std::cout << "_____________Test 9: uintArray:_____________" << std::endl;
    unsigned int uintArray[] = {1, 2, 3, 4, 5};
    iter(uintArray, 5, printElement<unsigned int>);


    return 0;
}