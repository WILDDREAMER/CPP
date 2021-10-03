#include "./Karen.hpp"

int main(int argc, char **argv)
{
    Karen k;

    if(argc >= 2)
        k.complain(argv[1]);
    return 0;
}