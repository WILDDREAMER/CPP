#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
public:
    WrongAnimal();
    WrongAnimal(const WrongAnimal &wronganimal);
    ~WrongAnimal();
    WrongAnimal &operator=(const WrongAnimal &obj);
    void makeSound() const;
    std::string getType() const;
protected:
    std::string _type;
};

class WrongCat : public WrongAnimal
{
public:
    WrongCat();
    WrongCat(const WrongCat &wrongcat);
    ~WrongCat();
    WrongCat &operator=(const WrongCat &obj);
    void makeSound() const;
};

#endif