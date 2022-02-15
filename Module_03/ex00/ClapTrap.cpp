#include "./clapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    this->hit_points = 10;
    this->energy_points = 10;
    this->attack_damage = 0;
    std::cout << RED << "ClapTrap " << WHT << this->name << " is ready to fight!" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << RED << "ClapTrap " << WHT << this->name << " is dead!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << RED << "ClapTrap " << WHT << this->name << " takes " << amount << " damage!" << std::endl;
    this->hit_points -= amount;
    if (this->hit_points < 0)
        this->hit_points = 0;
    std::cout << RED << "ClapTrap " << WHT << this->name << " has " << this->hit_points << " hit points left!" << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
    std::cout << RED << "ClapTrap " << WHT << this->name << " attacks " << target << "!" << std::endl;
    this->energy_points--;
    std::cout << RED << "ClapTrap " << WHT << this->name << " causes " << this->attack_damage << " damage to " << target << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << RED << "ClapTrap " << WHT << this->name << " is repaired by " << amount << " hit points!" << std::endl;
    this->hit_points += amount;
    this->energy_points--;
    std::cout << RED << "ClapTrap " << WHT << this->name << " has " << this->hit_points << " hit points left!" << std::endl;
}