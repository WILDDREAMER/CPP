#include "./Polymorphism.hpp"


//Animal
AAnimal::AAnimal() : _type("Animal")
{
    std::cout << "Animal created" << std::endl;
}

AAnimal::AAnimal(const AAnimal &animal)
{
    *this = animal;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal destroyed" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

std::string AAnimal::getType() const
{
    return _type;
}


//Dog
Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &dog)
{
    *this = dog;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destroyed" << std::endl;
}

Dog &Dog::operator=(const Dog &obj)
{   
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof!" << std::endl;
}



//Cat
Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat created" << std::endl;
}

Cat::Cat(const Cat &cat)
{
    *this = cat;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destroyed" << std::endl;
}

Cat &Cat::operator=(const Cat &obj)
{   
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}


