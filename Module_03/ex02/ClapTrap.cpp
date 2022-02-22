#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(100), _energy_points(100), _attack_damage(30)
{
    std::cout << GRN  << "ClapTrap " << _name << " is born!" << WHT << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap " << _name << " is dead!" << WHT << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << _name  << " takes " << amount << " damage!" << std::endl;
    _hit_points -= amount;
    if (_hit_points < 0)
        _hit_points = 0;
    std::cout << "ClapTrap " << _name << " has " << _hit_points << " hit points left!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target << "!" << std::endl;
    _energy_points--;
    std::cout << "ClapTrap " << _name << " causes " << _attack_damage << " damage to " << target << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "ClapTrap " << _name << " is repaired by " << amount << " hit points!" << std::endl;
    _hit_points += amount;
    _energy_points--;
    std::cout << "ClapTrap " << _name << " has " << _hit_points << " hit points left!" << std::endl;
}