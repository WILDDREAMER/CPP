#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    std::string _name;

public:
    ScavTrap(std::string name);
    ~ScavTrap();
    void guardGate();
};

#endif