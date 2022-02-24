#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name) , _name(name)
{
    std::cout << GRN << "FR4G-TP " << _name << " is born!" << WHT << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << RED << "FR4G-TP " << _name << " is dead!" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "FR4G-TP " << _name << " high-fives everybody!" << std::endl;
}