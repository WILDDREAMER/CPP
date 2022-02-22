#include "./FragTrap.hpp"

int main()
{
    FragTrap frag("Salm");
    frag.takeDamage(10);
    frag.beRepaired(10);
    frag.attack("Swilm");
    frag.highFivesGuys();
    return 0;
}