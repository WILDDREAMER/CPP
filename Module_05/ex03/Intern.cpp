#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern created" << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern destroyed" << std::endl;
}
Intern::Intern(const Intern &obj)
{
    *this = obj;
    std::cout << "Intern copied" << std::endl;
}
Intern &Intern::operator=(const Intern &obj)
{
    (void)obj;
    return (*this);
}

const char *Intern::UnknownFormException::what() const throw()
{
    return ("Unknown form");
}

Form *Intern::makeForm(std::string formName, std::string formTarget)
{
    std::string names[3]= {"robotomy request", "shrubbery creation", "presidential pardon"};
    Form *form[3] = { new RobotomyRequestForm(formTarget), new PresidentialPardonForm(formTarget), new ShrubberyCreationForm(formTarget)};
    try{
        for (int i = 0; i < 3; i++)
        {
            if (names[i] == formName)
                return (form[i]);
        }
        throw Intern::UnknownFormException();
    }
    catch(Intern::UnknownFormException &e){
        std::cout << RED << e.what() << WHT << std::endl;
    }
    return (NULL);
}
