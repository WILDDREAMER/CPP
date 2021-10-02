#include "./HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
{
    this->name = name;
    this->weapon = &weapon;
}
HumanA::~HumanA(){}
void HumanA::attack(){
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
void HumanA::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}