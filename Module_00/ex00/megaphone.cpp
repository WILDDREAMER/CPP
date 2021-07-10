#include <iostream>

int main(int argc, char **argv)
{
    int size;

    if (argc > 1)
        for(int j = 1; j < (argc); ++j)
        {
            size = std::strlen(argv[j]);
            for(int i = 0; i < size; ++i)
            {
                std::cout << (char)toupper(argv[j][i]);
            }
        }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout<< std::endl;
    return (0);
}