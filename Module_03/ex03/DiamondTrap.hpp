#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "./ScavTrap.hpp"
#include "./FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private:
        std::string _name;
        int _hitPoints;
        int _energyPoints;
        int _attackDamage;

    public:
        DiamondTrap(std::string name);
        ~DiamondTrap();
        void attack(const std::string &target);
        void whoAmI();
};

#endif