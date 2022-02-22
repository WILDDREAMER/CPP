#include "./ScavTrap.hpp"

void ScavTrap::guardGate(){
    std::cout << "ScavTrap " << _name << " is now in Gate keeper mode!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) , _name(name)
{
    std::cout << GRN << "ScavTrap " << _name << " is born!" << WHT << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << RED << "ScavTrap " << _name << " is dead!" << WHT << std::endl;
}