#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;

    public:
        DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &diamondTrap);
        DiamondTrap &operator=(const DiamondTrap &obj);
        ~DiamondTrap();
        void attack(std::string target);
        void whoAmI();
};

#endif