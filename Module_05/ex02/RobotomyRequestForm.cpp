#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45)
{
    std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): Form(obj)
{
    std::cout << "RobotomyRequestForm copied" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destroyed" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &obj)
{
    if (this != &obj)
    {
        Form::operator=(obj);
    }
    return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    try
    {
        if (!getSigned())
            throw RobotomyRequestForm::NotSignedException();
        if (executor.getGrade() > getGradeToExecute())
            throw RobotomyRequestForm::GradeTooLowException();
        if ((rand() % 100) > 50)
            std::cout << "Robotomy successful" << std::endl;
        else
            std::cout << "Robotomy failed" << std::endl;
    }
    catch (Form::NotSignedException &e)
    {
        std::cout << RED << e.what() << WHT << std::endl;
    }
}