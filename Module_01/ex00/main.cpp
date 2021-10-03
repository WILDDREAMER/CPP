#include "./Zombie.hpp"

int main()
{
    randomChump("oussama");
    Zombie *z = newZombie("oussama");
    std::cout << z->getName() << std::endl;
    delete(z);
    return 0;
}