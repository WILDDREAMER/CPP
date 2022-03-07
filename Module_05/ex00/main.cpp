#include "Bureaucrat.hpp"

int     main(void)
{
    Bureaucrat a("a", 1);
    Bureaucrat b("b", 151);
    Bureaucrat c("c", 100);
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << c << std::endl;

    a.incrementGrade();
    b.decrementGrade();
    c.decrementGrade();
    c.decrementGrade();
    std::cout << a.getName() << " : "<< a.getGrade() << std::endl; 
    std::cout << b.getName() << " : "<< b.getGrade() << std::endl;
    std::cout << c.getName() << " : "<< c.getGrade() << std::endl;
}