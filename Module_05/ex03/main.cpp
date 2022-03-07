#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern someRandomIntern;
    Form *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    if (rrf)
    {
        Bureaucrat b("boo", 1);
        rrf->beSigned(b);
        rrf->execute(b);
    }
}