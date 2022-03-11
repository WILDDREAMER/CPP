#include "Array.hpp"

int main(int, char **)
{
    std::cout << "--------- Default  constructor ---------" << std::endl;
    Array<int> x;
    std::cout << x.size() << std::endl;
    std::cout << "-------- constructor with param --------" << std::endl;
    Array<int> a(4);
    for (int i = 0; i < a.size(); i++)
        a[i] = i;
    std::cout << "----------- Copy constructor -----------" << std::endl;
    Array<int> b(a);
    for (int i = 0; i < b.size(); i++)
        std::cout << b[i] << std::endl;
    std::cout << "----------------- Size -----------------" << std::endl;
    std::cout << "a.size() = " << a.size() << std::endl;
    std::cout << "b.size() = " << b.size() << std::endl;
    std::cout << "------------- Out of range -------------" << std::endl;
    std::cout << "a[-1] = " << a[-1] << std::endl;
    std::cout << "a[4] = " << a[4] << std::endl;
    Array<int> c(5);
    std::cout << "------- Copy assignment Operator -------" << std::endl;
    c = b;
    for (int i = 0; i < c.size(); i++)
        std::cout << c[i] << std::endl;
    return 0;
}