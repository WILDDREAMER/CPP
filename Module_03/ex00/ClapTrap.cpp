#include "./ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap " << WHT << _name << " is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED << "ClapTrap " << WHT << _name << " takes " << amount << " damage!" << std::endl;
    _hit_points -= amount;
    if (_hit_points < 0)
        _hit_points = 0;
    std::cout << RED << "ClapTrap " << WHT << _name << " has " << _hit_points << " hit points left!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << RED << "ClapTrap " << WHT << _name << " attacks " << target << "!" << std::endl;
    _energy_points--;
    std::cout << RED << "ClapTrap " << WHT << _name << " causes " << _attack_damage << " damage to " << target << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << RED << "ClapTrap " << WHT << _name << " is repaired by " << amount << " hit points!" << std::endl;
    _hit_points += amount;
    _energy_points--;
    std::cout << RED << "ClapTrap " << WHT << _name << " has " << _hit_points << " hit points left!" << std::endl;
}