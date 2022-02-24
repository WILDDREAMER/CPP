#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
    std::cout << GRN  << "DiamondTrap " << _name << " is born!" << WHT << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << RED << "DiamondTrap " << _name << " is dead!" << WHT << std::endl;
}
