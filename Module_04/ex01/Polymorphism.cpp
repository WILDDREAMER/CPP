#include "./Polymorphism.hpp"


//Animal
Animal::Animal() : _type("Animal")
{
    std::cout << "Animal created" << std::endl;
}

Animal::Animal(const Animal &animal)
{
    *this = animal;
    std::cout << "Animal copied" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destroyed" << std::endl;
}

Animal &Animal::operator=(const Animal &obj)
{
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
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
    _brain = new Brain();
    std::cout << "Dog created" << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog), _brain(new Brain(*dog._brain))
{
    *this = dog;
    std::cout << "Dog copied" << std::endl;
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

Cat::Cat(const Cat &cat) : Animal(cat), _brain(new Brain(*cat._brain))
{
    *this = cat;
    std::cout << "Cat copied" << std::endl;
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


