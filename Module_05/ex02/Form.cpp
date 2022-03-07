#include "Form.hpp"

Form::Form() : _name(""), _signed(false), _grade_to_sign(1), _grade_to_execute(1)
{
    std::cout << "Form created" << std::endl;
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_execute) : _name(name), _signed(false), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
    std::cout << "Form created" << std::endl;
}

Form::Form(const Form &form): _name(form._name), _signed(form._signed), _grade_to_sign(form._grade_to_sign), _grade_to_execute(form._grade_to_execute)
{
    std::cout << "Form copied" << std::endl;
}


Form::~Form()
{
    std::cout << "Form destroyed" << std::endl;
}

std::ostream & operator<<(std::ostream& os, const Form & f)
{
    if (f.getSigned())
        os << "the form: " << f.getName() << " is signed\n";
    else
        os << "the form: " << f.getName() << " is not signed\n";
	os << "grade to exec: " << f.getGradeToExecute() << std::endl;
	os << "grade to sign: " << f.getGradeToSign();
    return (os);
}


Form &Form::operator=(const Form &obj)
{
    (void)obj;
    return (*this);
}

std::string Form::getName() const
{
    return _name;
}

int Form::getGradeToSign() const
{
    return _grade_to_sign;
}

int Form::getGradeToExecute() const
{
    return _grade_to_execute;
}

bool Form::getSigned() const
{
    return _signed;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    try
    {
        if (bureaucrat.getGrade() > _grade_to_sign)
            throw Form::GradeTooLowException();
        _signed = true;
        std::cout << bureaucrat.getName() << " signs " << _name << std::endl;
    }
    catch (Form::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << WHT << std::endl;
    }
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Grade too high";
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Grade too low";
}

const char *Form::NotSignedException::what() const throw()
{
    return "Form not signed";
}