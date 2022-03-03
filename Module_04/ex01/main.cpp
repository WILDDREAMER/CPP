#include "./Polymorphism.hpp"

int main()
{
    Animal *animals[6];

    std::cout << "Creating animals" << std::endl;
    for (size_t i = 0; i < 3; i++)
    {
        animals[i] = new Dog();
    }
    for (size_t i = 3; i < 6; i++)
    {
        animals[i] = new Cat();
    }
    std::cout << "Deleting animals" << std::endl;
    for (size_t i = 0; i < 6; i++)
    {
        delete animals[i];
    }
    return 0;
}