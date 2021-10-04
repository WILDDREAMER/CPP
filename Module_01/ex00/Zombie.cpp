#include "./Zombie.hpp"

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie(){
    std::cout << RED << this->name << " Dead" << WHT << std::endl;
}

void Zombie::Announce(){
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
    return this->name;
}