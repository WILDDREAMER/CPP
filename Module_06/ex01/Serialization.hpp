/*
-It is used to convert a pointer of some data type into a pointer of another data type,
even if the the data types before and after conversion are different.
-It does not check if the pointer type and data pointed by the pointer is same or not.
*/
#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>

struct Data
{
    std::string str;
};


uintptr_t serialize(Data* ptr);

Data *deserialize(uintptr_t raw);

#endif