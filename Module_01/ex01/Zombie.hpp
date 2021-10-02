#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# define WHT "\e[0;37m"
# define BLK "\e[1;30m"
# define RED "\e[1;31m"
# define GRN "\e[1;32m"
# define YEL "\e[1;33m"
# define BLU "\e[1;34m"
# define MAG "\e[1;35m"
# define CYN "\e[1;36m"

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

Zombie* zombieHorde( int N, std::string name );

#endif