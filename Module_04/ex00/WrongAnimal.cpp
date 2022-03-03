#include "./WrongAnimal.hpp"

//WrongCat

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
