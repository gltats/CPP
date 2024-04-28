#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <exception>
#include <unistd.h>
#include <typeinfo>

class Base 
{
public:
    Base();
    Base(const Base &src);
    virtual ~Base();
};

Base *generate();
void identify(Base *p);
void identify(Base &p);
