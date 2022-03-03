#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap D("salm");
    std::cout << std::endl;

    DiamondTrap C(D);
    std::cout << std::endl;

    C.attack("swilm");
    std::cout << std::endl;

    C.beRepaired(50);
    std::cout << std::endl;

    C.whoAmI();
    std::cout << std::endl;

    return 0;
}