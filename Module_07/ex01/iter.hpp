#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename S>
void iter(A *a, S s, void(*f)(const A&))
{
    for (S i = 0; i < s; i++)
        f(a[i]);
}

#endif