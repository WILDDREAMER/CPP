#include "Dynamic.hpp"

int main()
{
    Base* p = generate();
    identify(p);
    std::cout << "---" << std::endl;
    identify(*p);
    return 0;
}