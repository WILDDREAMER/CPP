#include "./ClapTrap.hpp"

int main()
{
    ClapTrap clap("Salm");
    clap.takeDamage(10);
    clap.beRepaired(10);
    clap.attack("Swilm");
    return 0;
}