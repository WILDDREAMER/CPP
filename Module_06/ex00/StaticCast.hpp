#ifndef STATIC_HPP
#define STATIC_HPP

#include <cmath>
#include <iostream>

class StaticCast
{
private:
    std::string _value;
public:
    StaticCast();
    ~StaticCast();
    StaticCast(std::string value);
    StaticCast(float value);
    StaticCast(int value);
    StaticCast(double value);
    StaticCast(const StaticCast &obj);
    StaticCast &operator=(const StaticCast &obj);
    void convert() const;
};

#endif