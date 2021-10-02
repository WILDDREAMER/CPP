#include "./HumanA.hpp"

int main()
{
    Weapon w;
    w.setType("knife");
    HumanA bob("Bob", w);
    bob.attack();
    return 0;
}