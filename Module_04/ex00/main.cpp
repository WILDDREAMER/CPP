#include "./Polymorphism.hpp"

int main()
{
    const Animal *meta = new Animal();
    const Animal *j = new Dog();
    const Animal *i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); // will output the cat sound!
    j->makeSound();
    meta->makeSound();

    const WrongAnimal *WrongMeta = new WrongAnimal();
    const WrongAnimal *WrongI = new WrongCat();
    std::cout << std::endl << "WRONG OUTPUT: " << std::endl;
    WrongMeta->makeSound();
    WrongI->makeSound();
    return 0;
}