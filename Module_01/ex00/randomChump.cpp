#include "./Zombie.hpp"

void randomChump( std::string name ){
    Zombie *z = newZombie(name);
    z->Announce();
    delete(z);
}