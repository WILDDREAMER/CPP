#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <random>


int     main(void)
{
    Bureaucrat  c("chef", 4);
    ShrubberyCreationForm   a("a");
    RobotomyRequestForm     b("b");
    PresidentialPardonForm  d("c");

    std::cout << "-------------------------------------------\n";
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    a.beSigned(c);
    std::cout << a << std::endl;
    std::cout << "-------------------------------------------\n";
    a.execute(c);
    b.beSigned(c);
    std::cout << b << std::endl;
    std::cout << "-------------------------------------------\n";
    b.execute(c);
    std::cout << "-------------------------------------------\n";
    d.beSigned(c);
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    d.execute(c);
    return(0);
}