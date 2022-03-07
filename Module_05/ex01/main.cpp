#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat a("a", 1);
    Bureaucrat c("c", 100);
    std::cout << "-------------------------------------------\n";
    Form b("S.V.D", 2, 7);
    Form d("B.B.B", 99, 98);
    std::cout << "-------------------------------------------\n";
    std::cout << a << std::endl;
    std::cout << c << std::endl;
    std::cout << "-------------------------------------------\n";
    std::cout << b << std::endl;
    std::cout << d << std::endl;
    std::cout << "-------------------------------------------\n";
    b.beSigned(a);
    d.beSigned(a);
    std::cout << "-------------------------------------------\n";
    std::cout << "Form name: " << b.getName() << " ,Grade to execute: " << b.getGradeToExecute() << " ,Grade to sign: " << b.getGradeToSign() << " ,signing status: " << b.getSigned() << std::endl;
    std::cout << "Form name: " << d.getName() << " ,Grade to execute: " << d.getGradeToExecute() << " ,Grade to sign: " << d.getGradeToSign() << " ,signing status: " << d.getSigned() << std::endl;
    std::cout << "-------------------------------------------\n";
    a.signForm(b);
    c.signForm(d);
    std::cout << "-------------------------------------------\n";
    a.incrementGrade();
    std::cout << "-------------------------------------------\n";
    return (0);
}