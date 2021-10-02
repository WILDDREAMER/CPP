#include "./Zombie.hpp"

int main()
{
    Zombie *z = zombieHorde(1000, "zombieee");
    z->Announce();
    return 0;
}