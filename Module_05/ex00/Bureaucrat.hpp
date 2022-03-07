#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

# define WHT "\e[0;37m"
# define RED "\e[1;31m"

class Bureaucrat
{
private:
    const std::string _name;
    int _grade;

public:
    Bureaucrat();
    Bureaucrat(const std::string &name, int grade);
    Bureaucrat(const Bureaucrat &bureaucrat);
    ~Bureaucrat();
    Bureaucrat &operator=(const Bureaucrat &obj);
    class GradeTooHighException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };

    class GradeTooLowException : public std::exception
    {
    public:
        virtual const char* what() const throw();
    };
    const std::string getName() const;
    int getGrade() const;
    void incrementGrade();
    void decrementGrade();
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif