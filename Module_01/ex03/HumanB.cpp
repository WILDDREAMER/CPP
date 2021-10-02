#include "./HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
}
HumanB::~HumanB(){}
void HumanB::attack(){
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
