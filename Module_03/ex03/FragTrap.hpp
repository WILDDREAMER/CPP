#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "./ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
    std::string _name;

public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(const FragTrap &fragTrap);
    FragTrap &operator=(const FragTrap &obj);
    ~FragTrap();
    void attack(std::string const &target);
    void highFivesGuys(void);
};

#endif