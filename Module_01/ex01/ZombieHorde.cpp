#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++)
        z[i].setName(name + std::to_string(i));
    return z;
}