#include "./Polymorphism.hpp"


//Animal
Animal::Animal() : _type("Animal")
{
}

Animal::Animal(const Animal &animal) : _type(animal._type)
{
}

Animal::~Animal()
{
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
}

Dog::Dog(const Dog &dog) : Animal(dog)
{
}

Dog::~Dog()
{
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
}

Cat::Cat(const Cat &cat) : Animal(cat)
{
}

Cat::~Cat()
{
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




//WrongAnimal
WrongAnimal::WrongAnimal() : _type("WrongAnimal")
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &wronganimal) : _type(wronganimal._type)
{
}

WrongAnimal::~WrongAnimal()
{
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj)
{
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}


//WrongCat
WrongCat::WrongCat()
{
    _type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
}

WrongCat::~WrongCat()
{
}

WrongCat &WrongCat::operator=(const WrongCat &obj)
{   
    if (this != &obj)
    {
        _type = obj._type;
    }
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}

