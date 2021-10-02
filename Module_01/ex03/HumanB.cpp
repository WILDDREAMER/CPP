#include "./HumanB.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
    this->name = name;
    this->weapon = weapon;
}
HumanB::~HumanB(){}
void HumanB::attack(){
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}