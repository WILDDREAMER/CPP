#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>

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
        int *_arr;
        int _curr;
        int _shortest;
        int _longest;
};

#endif