#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    std::string _name;

public:
    FragTrap(std::string name);
    ~FragTrap();
    void highFivesGuys(void);
};

#endif