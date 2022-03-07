#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
    const std::string _name;
    bool _signed;
    const int _grade_to_sign;
    const int _grade_to_execute;

public:
    Form();
    Form(const std::string &name, int grade_to_sign, int grade_to_execute);
    Form(const Form &form);
    ~Form();
    Form &operator=(const Form &obj);
    std::string getName() const;
    int getGradeToSign() const;
    int getGradeToExecute() const;
    bool getSigned() const;
    void beSigned(Bureaucrat &bureaucrat);
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};
std::ostream &operator<<(std::ostream &os, const Form &f);
#endif