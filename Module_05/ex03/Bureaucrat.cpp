#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name(""), _grade(1)
{
    std::cout << "Bureaucrat created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat)
{
    *this = bureaucrat;
    std::cout << "Bureaucrat copied" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name), _grade(1)
{
    try
    {
        if (grade < 1)
            throw Bureaucrat::GradeTooHighException();
        if (grade > 150)
            throw Bureaucrat::GradeTooLowException();
        _grade = grade;
        std::cout << "Bureaucrat created" << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << WHT << std::endl;
    }
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
    if (this != &obj)
    {
        this->_name = obj._name;
        this->_grade = obj._grade;
    }
    return (*this);
}

const std::string Bureaucrat::getName() const
{
    return _name;
}

int Bureaucrat::getGrade() const
{
    return _grade;
}

void Bureaucrat::incrementGrade()
{
    try
    {
        if (_grade > 1)
            _grade--;
        else
            throw Bureaucrat::GradeTooHighException();
    }
    catch (Bureaucrat::GradeTooHighException &e)
    {
        std::cout << RED << e.what() << WHT << _name << std::endl;
    }
}

void Bureaucrat::decrementGrade()
{
    try
    {
        if (_grade < 150)
            _grade++;
        else
            throw Bureaucrat::GradeTooLowException();
    }
    catch (Bureaucrat::GradeTooLowException &e)
    {
        std::cout << RED << e.what() << WHT << _name << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high for: ";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low for: ";
}

const char *Bureaucrat::FormAlreadySignedException::what() const throw()
{
    return "Form already signed: ";
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        if (form.getSigned())
            throw Bureaucrat::FormAlreadySignedException();
        if (form.getGradeToSign() > _grade)
            throw Bureaucrat::GradeTooLowException();
        form.beSigned(*this);
    }
    catch (Bureaucrat::FormAlreadySignedException &e)
    {
        std::cout << RED << e.what() << WHT << _name << std::endl;
    }
}

