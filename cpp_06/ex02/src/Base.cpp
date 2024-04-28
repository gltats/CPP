#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"

Base::Base() {}

Base::~Base() {}

Base *generate()
{
    srand(time(NULL));
    int random = std::rand() % 3;
    switch (random)
    {
    case 0:
        return new A();
    case 1:
        return new B();
    case 2:
        return new C();
    }
    return (0);
}

void identify(Base *p)
{
    try
    {
        if (dynamic_cast<A *>(p))
        {
            std::cout << "A" << std::endl;
        }
        else if (dynamic_cast<B *>(p))
        {
            std::cout << "B" << std::endl;
        }
        else if (dynamic_cast<C *>(p))
        {
            std::cout << "C" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "Invalid cast\n";
    }
}

void identify(Base &ref)
{
    try
    {
        if (typeid(ref) == typeid(A))
        {
            std::cout << "A" << std::endl;
        }
        else if (typeid(ref) == typeid(B))
        {
            std::cout << "B" << std::endl;
        }
        else if (typeid(ref) == typeid(C))
        {
            std::cout << "C" << std::endl;
        }
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << "Invalid cast\n";
    }
}
