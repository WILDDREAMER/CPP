// •Name, which is passed as parameter to a constructor
// •Hit points (10), represent the health of the ClapTrap
// •Energy points (10)
// •Attack damage (0)
// Add the following public member functions so the ClapTrap looks more realistic:
// •void attack(const std::string& target);
// •void takeDamage(unsigned int amount);
// •void beRepaired(unsigned int amount);
// When ClapTrack attacks, it causes its target to lose <attack damage> hit points.
// When ClapTrap repairs itself, it gets <amount> hit points back. Attacking and repairing
// cost 1 energy point each. Of course, ClapTrap can’t do anything if it has no hit points
// or energy points left.

#ifndef ClapTrap_HPP
#define ClapTrap_HPP
#include <iostream>

#define RED "\e[1;31m"
#define WHT "\e[0;37m"
# define GRN "\e[1;32m"

class ClapTrap
{
protected:
    std::string _name;
    int _hit_points;
    int _energy_points;
    int _attack_damage;

public:
    ClapTrap();
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &clapTrap);
    ~ClapTrap();
    ClapTrap &operator=(const ClapTrap &obj);
    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif