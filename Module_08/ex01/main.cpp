#include "Span.hpp"
int main(){
    Span s(6);
    s.addNumber(5);
    s.addNumber(1);
    s.addNumber(2);
    s.addNumber(3);
    s.addNumber(100);
    s.addNumber(100);
    std::cout << s.longestSpan() << std::endl;
    std::cout << s.shortestSpan() << std::endl;
    Span s2(5);
    s2.addNumber(5);
    std::cout << s2.longestSpan() << std::endl;
    std::cout << s2.shortestSpan() << std::endl;
    s2.addNumber(11);
    std::cout << s2.longestSpan() << std::endl;
    std::cout << s2.shortestSpan() << std::endl;
}