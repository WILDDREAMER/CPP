#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

# define RED "\e[1;31m"

class Zombie
{
    private:
        std::string name;

    public:
        Zombie();
        ~Zombie();
        void Announce();
        void setName(std::string name);
        std::string getName();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif