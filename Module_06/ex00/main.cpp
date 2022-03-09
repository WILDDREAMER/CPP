#include "./StaticCast.hpp"

int main(int ac, char **av)
{
    (void)ac;
    (void)av;
    StaticCast obj("42");
    obj.convert();
    return (0);
}