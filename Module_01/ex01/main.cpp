#include "./Zombie.hpp"

int main()
{
    int N = 0;
    Zombie *z = zombieHorde(N, "zombie");
    for (int i = 0; i < N; i++)
    {
        std::cout << BLU << "Calling announce for ";
        z[i].Announce();
    }
    delete[] z;
    return 0;
}