#include "./Polymorphism.hpp"


//Animal
Animal::Animal() : _type("Animal")
{}

Animal &Animal::operator=(const Animal &obj)
{
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
}

Animal::~Animal()
{
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}


//Dog
Dog::Dog()
{
    _type = "Dog";
}

Dog &Dog::operator=(const Dog &obj)
{   
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

//Cat
Cat::Cat()
{
    _type = "Cat";
}

Cat &Cat::operator=(const Cat &obj)
{   
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}


