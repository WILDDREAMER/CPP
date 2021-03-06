//https://www.learncpp.com/cpp-tutorial/virtual-functions/
#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

#include "./WrongAnimal.hpp"

class Animal
{
public:
    Animal();
    Animal(const Animal &animal);
    ~Animal();
    Animal &operator=(const Animal &obj);
    virtual void makeSound() const;
    std::string getType() const;
protected:
    std::string _type;
};

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &dog);
    ~Dog();
    Dog &operator=(const Dog &obj);
    virtual void makeSound() const;
};

class Cat : public Animal
{
public:
    Cat();
    Cat(const Cat &cat);
    ~Cat();
    Cat &operator=(const Cat &obj);
    virtual void makeSound() const;
};

#endif