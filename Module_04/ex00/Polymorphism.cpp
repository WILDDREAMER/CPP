#include "./Polymorphism.hpp"


//Animal
Animal::Animal() : _type("Animal")
{
    std::cout << "Animal created" << std::endl;
}

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
    std::cout << "Animal destroyed" << std::endl;
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
    std::cout << "Dog created" << std::endl;
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
    std::cout << "Dog destroyed" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}

//Cat
Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat created" << std::endl;
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
    std::cout << "Cat destroyed" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}


