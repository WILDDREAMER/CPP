#include "./phoneBook.hpp"

std::string str_toupper(std::string str)
{
    int size = str.length();
    std::string new_ = "";
    for(int i = 0; i < size; ++i)
    {
        new_ += (char)toupper(str[i]);
    }
    return new_;
}

int main(void)
{
    phoneBook p1;
    std::string command;
    std::string input;
    int desiredIndex;
    int i = 0;

    while (1)
    {
        std::cout << YEL << std::endl << "ENTER A COMMAND: (ADD, SEARCH, EXIT)" << std::endl << WHT;
        std::cin >> command;
        if (str_toupper(command) == "ADD")
        {
            i = i % 8;
            std::cout << std::endl << BLK << "******************************************************\n";
            std::cout << BLU << "FIRST NAME: " << WHT;
            std::cin >> input;
            p1.ADD(input, 0, i);
            std::cout << BLU << "LAST NAME: " << WHT;
            std::cin >> input;
            p1.ADD(input, 1, i);
            std::cout << BLU << "NICKNAME: " << WHT;
            std::cin >> input;
            p1.ADD(input, 2, i);
            std::cout << BLU << "PHONE NUMBER: " << WHT;
            std::cin >> input;
            p1.ADD(input, 3, i);
            std::cout << BLU << "DARKEST SECRET: " << WHT;
            std::cin >> input;
            std::cout << BLK << "******************************************************\n" << WHT;
            p1.ADD(input, 4, i);
            ++i;
            p1.set_available();
        }
        else if (str_toupper(command) == "SEARCH")
        {
            if (!p1.get_available())
                std::cout << YEL <<  "NO CONTACTS AVAILABLE, GO ADD SOME!" << std::endl;
            else
            {
                std::cout << std::endl << YEL << "AVAILABLE CONTACTS: " << std::endl << std::endl << WHT ;
                p1.SEARCH();
                std::cout << std::endl << YEL << "ENTER INDEX OF DESIRED CONTACT: " << std::endl << WHT;
                std::cin >> input;
                desiredIndex = std::stoi(input);
                if (desiredIndex >= 0 && desiredIndex < p1.get_available())
                {
                    std::cout << std::endl;
                    p1.get_contact(desiredIndex);
                }
                else
                    std::cout << RED << "INDEX NOT FOUND!!" << std::endl;
            }
        }
        else if (str_toupper(command) == "EXIT")
        {
            exit(EXIT_SUCCESS);
        }
        else
            std::cout<< RED << "COMMAND NOT VALID!" << WHT;
    }
    return (0);
}
