#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

# define RED "\e[1;31m"
# define WHT "\e[0;37m"
class Zombie
{
    private:
        std::string name;

    public:
        Zombie(std::string name);
        ~Zombie();
        void Announce();
        std::string getName();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif