#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename A, typename S, typename F>
void func(A a, S s, F f)
{
    f(a, s);
}

#endif