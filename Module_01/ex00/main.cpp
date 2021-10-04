#include "./Zombie.hpp"

int main()
{
    Zombie *z = newZombie("zakkare");
    std::cout << z->getName() << std::endl;
    delete(z);
    randomChump("oussama");
    return 0;
}