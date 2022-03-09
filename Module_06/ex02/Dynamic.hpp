//geeksforgeeks.org/dynamic-_cast-in-cpp/
#ifndef DYNAMIC_HPP
#define DYNAMIC_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class Base
{
public:
    virtual ~Base() {}
};

class A : public Base
{
};

class B : public Base
{
};

class C : public Base
{
};

Base * generate(void);
void identify(Base *);
void identify(Base &);
#endif