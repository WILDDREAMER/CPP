#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if (!N)
        return NULL;
    Zombie *first;
    for (int i = 0; i < N; i++)
    {
        Zombie *z = new(Zombie);
        z->setName(name + std::to_string(i));
        std::cout << BLU << "Calling announce for ";
        z->getName();
        z->Announce();
        if (i == 0)
            first = z;
        else
            delete(z);
    }
    return first;
}