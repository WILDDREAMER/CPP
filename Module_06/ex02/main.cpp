#include "Dynamic.hpp"

int main()
{
    Base* p = generate();
    std::cout << "Pointer: ";
    identify(p);
    std::cout << "Reference: ";
    identify(*p);
    return 0;
}