// Iterators are used to point at the memory addresses of STL containers. They are primarily used in sequence of numbers, characters etc. They reduce the complexity and execution time of program.
// Operations of iterators :-
// 1. begin() :- This function is used to return the beginning position of the container.
// 2. end() :- This function is used to return the after end position of the container.

//https://www.geeksforgeeks.org/containers-cpp-stl/
#ifndef EASYFINF_HPP
#define EASYFINF_HPP

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <set>
#include <map>

template <typename T>
int easyfind(T const &container, int const &value)
{
    // search using STL algorithms(find).
    try
    {
        typename T::const_iterator it = std::find(container.begin(), container.end(), value);
        if (it != container.end())
            return *it;
        else
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << "Value not found";
    }
    return 0;
}

#endif