#include "./ScavTrap.hpp"

int main()
{
    ScavTrap scav("Salm");
    scav.takeDamage(10);
    scav.beRepaired(10);
    scav.attack("Swilm");
    scav.guardGate();
    return 0;
}