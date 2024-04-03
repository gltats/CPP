#include "Serializer.hpp"
#include "Data.hpp"

void test() {
    std::cout << "__________Test 1__________" << '\n';
    Data data;
    
    // Serialize the address of the Data object
    uintptr_t serialized = Serializer::serialize(&data);
    // Deserialize the serialized value
    Data* deserialized = Serializer::deserialize(serialized);

    std::cout << "d1's address : " << &serialized  << '\n';
    std::cout << "d1Ptr's value : " << deserialized << '\n';
    if (deserialized == &data) {
        std::cout << "Deserialization successful!" << std::endl;
    } else {
        std::cout << "Deserialization failed!" << std::endl;
    }

    std::cout << "__________Test 2__________" << '\n';
    Data data2;
    uintptr_t serialized2 = Serializer::serialize(&data2);
    Data* deserialized2 = Serializer::deserialize(serialized);//not using the serialized2 so will fail

    std::cout << "d2's address : " << &serialized2  << '\n';
    std::cout << "d2Ptr's value : " << deserialized2 << '\n';

    if (deserialized2 == &data2) {
        std::cout << "Deserialization successful!" << std::endl;
    } else {
        std::cout << "Deserialization failed!" << std::endl;
    }
}

int main()
{
    test();
    return 0;
}
