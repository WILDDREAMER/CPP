#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5)
{
    std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj) : Form(obj)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &obj)
{
    if (this != &obj)
    {
        Form::operator=(obj);
    }
    return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    try{
        if (!getSigned())
            throw PresidentialPardonForm::NotSignedException();
        if (executor.getGrade() > getGradeToExecute())
            throw PresidentialPardonForm::GradeTooLowException();
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    catch (PresidentialPardonForm::NotSignedException &e)
    {
        std::cout << RED << e.what() << WHT << std::endl;
    }
}