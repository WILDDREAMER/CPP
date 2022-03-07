#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include <string>
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "form.h"

class Intern
{
public:
    Intern();
    Intern(Intern const & old_object);
    Intern &		operator=(Intern const & other);
    ~Intern();
    Form*   makeForm(std::string formName, std::string formTarget);
    class UnknownFormException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
};

std::ostream & operator<<(std::ostream & o, const Intern & intern);


#endif