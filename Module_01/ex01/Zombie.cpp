#include "./Zombie.hpp"

Zombie::Zombie(){}

Zombie::~Zombie(){
    std::cout << RED << this->name << " Dead" << std::endl;
}

void Zombie::Announce(){
    std::cout << BLU << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->name = name;
}
std::string Zombie::getName()
{
    return this->name;
}