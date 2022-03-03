#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) 
{
    *this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
        _hit_points = obj._hit_points;
        _energy_points = obj._energy_points;
        _attack_damage = obj._attack_damage;
    }
    return *this;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << GRN  << "DiamondTrap " << _name << " is born!" << WHT << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap " << _name << " is dead!" << WHT << std::endl;
}

void DiamondTrap::attack(std::string target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name : " << _name << std::endl;
    std::cout << "Claptrap name : " << ClapTrap::_name << std::endl;
}