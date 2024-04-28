#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <exception>
#include <unistd.h>

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
