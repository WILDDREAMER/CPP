#include "Span.hpp"

Span::Span(unsigned int n) : _n(n)
{
    try
    {
        if (n <= 0)
            throw std::exception();
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << "number not valid" << std::endl;
        exit(EXIT_FAILURE);
    }
}

Span &Span::operator=(Span const &obj)
{
    if (this != &obj)
    {
        _n = obj._n;
        _vec = obj._vec;
    }
    return *this;
}

Span::Span(Span const &src)
{
    *this = src;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
    try
    {
        if (_vec.size() == _n)
            throw std::exception();
        else
            _vec.push_back(n);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << ": array full" << std::endl;
        exit(EXIT_FAILURE);
    }
}

int Span::longestSpan() const
{
    try
    {
        if (_vec.size() < 2)
            throw std::exception();
        else
        {
            int smallest = *std::min_element(_vec.begin(), _vec.end());
            int biggest = *std::max_element(_vec.begin(), _vec.end());
            return biggest - smallest;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << ": array too small";
    }
    return 0;
}

int Span::shortestSpan() const
{
    try
    {
        if (_vec.size() < 2)
            throw std::exception();
        else
        {
            std::vector <int>tmp = _vec;
            std::sort(tmp.begin(), tmp.end());
            return tmp[1] - tmp[0];
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << ": array too small";
    }
    return 0;
}