#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
    }
    return *this;
}

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

void FragTrap::attack(const std::string &target)
{
    std::cout << "FR4G-TP " << _name << " attacks " << target << "!" << std::endl;
    _energy_points--;
    std::cout << "FR4G-TP " << _name << " causes " << _attack_damage << " damage to " << target << std::endl;
}