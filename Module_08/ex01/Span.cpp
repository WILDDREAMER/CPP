#include "Span.hpp"

Span::Span(unsigned int n) : _n(n), _arr(NULL), _curr(0), _shortest(0), _longest(0)
{
    try
    {
        if (n <= 0)
            throw std::exception();
        else
            _arr = new int[n];
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "number not valid" << std::endl;
        exit(EXIT_FAILURE);
    }
}

Span & Span::operator=(Span const & obj)
{
    if (this != &obj)
    {
        _n = obj._n;
        _curr = obj._curr;
        _shortest = obj._shortest;
        _longest = obj._longest;
        if (_arr)
            delete [] _arr;
        _arr = new int[_n];
        for (int i = 0; i < _curr; i++)
            _arr[i] = obj._arr[i];
    }
    return *this;
}

Span::Span(Span const & src)
{
    *this = src;
}

Span::~Span()
{
    if (_arr)
        delete [] _arr;
}

void Span::addNumber(int n)
{
    try
    {
        if (_curr + 1 == _n)
            throw std::exception();
        else
        {
            _shortest = (_curr == 0) ? n : std::min(n, _arr[_curr - 1]);
            _arr[_curr] = n;
            _curr++;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "array full" << std::endl;
        exit(EXIT_FAILURE);
    }
}

