#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    std::string _name;

public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(const ScavTrap &scavTrap);
    ScavTrap &operator=(const ScavTrap &obj);
    ~ScavTrap();
    void attack(std::string const &target);
    void guardGate();
};

#endif