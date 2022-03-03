#include "./ScavTrap.hpp"

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
    std::cout << "ScavTrap created" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) , _name(name)
{
    std::cout << GRN << "ScavTrap " << _name << " is born!" << WHT << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << _name << " is dead!" << WHT << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj)
{
    if (this != &obj)
    {
        _name = obj._name;
    }
    return *this;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "ScavTrap " << _name << " attacks " << target << "!" << std::endl;
    ClapTrap::attack(target);    
}