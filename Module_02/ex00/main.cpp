#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    std::cout << "1-------1" << std::endl;
    Fixed b(a);
    std::cout << "2-------2" << std::endl;
    Fixed c;
    std::cout << "3-------3" << std::endl;
    c = b;
    std::cout << a.getRawBits() << std::endl;
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    return 0;
}