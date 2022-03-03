//https://www.learncpp.com/cpp-tutorial/virtual-functions/
// Pure virtual (abstract) functions and abstract base classes
// So far, all of the virtual functions we have written have a body (a definition).
// However, C++ allows you to create a special kind of virtual function called a pure virtual function (or abstract function)
// that has no body at all! A pure virtual function simply acts as a placeholder
// that is meant to be redefined by derived classes.

#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include "./Brain.hpp"

class AAnimal
{
public:
    AAnimal();
    AAnimal(const AAnimal &animal);
    virtual ~AAnimal();
    AAnimal &operator=(const AAnimal &obj);
    virtual void makeSound() const = 0;
    std::string getType() const;
protected:
    std::string _type;
};

class Dog : public AAnimal
{
public:
    Brain* _brain;
public:
    Dog();
    Dog(const Dog &dog);
    virtual ~Dog();
    Dog &operator=(const Dog &obj);
    virtual void makeSound() const;
};

class Cat : public AAnimal
{
public:
    Brain* _brain;
public:
    Cat();
    Cat(const Cat &cat);
    virtual ~Cat();
    Cat &operator=(const Cat &obj);
    virtual void makeSound() const;
};

#endif