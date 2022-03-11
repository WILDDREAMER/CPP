#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
class Span
{
    public:
        Span(unsigned int n);
        Span(Span const & src);
        ~Span();

        Span & operator=(Span const & rhs);

        void addNumber(int n);
        int shortestSpan() const;
        int longestSpan() const;

    private:
        unsigned int _n;
        std::vector<int> _vec;
};

#endif