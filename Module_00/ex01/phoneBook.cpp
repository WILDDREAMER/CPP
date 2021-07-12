#include "phoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>  

class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;

        void init(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string darkest_secret)
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->nickname = nickname;
            this->phone = phone;
            this->darkest_secret = darkest_secret;
        }
        Contact(){
            first_name = "";
            last_name = "";
            nickname = "";
            phone = "";
            darkest_secret = "";
        }

        void display_contact()
        {
            std::cout << std::endl << "FIRST NAME: " << first_name << std::endl << "LAST NAME: " << last_name << std::endl << "NICKNAME: " << nickname << std::endl;
        }

        bool check_contact(std::string key)
        {
            if (first_name == key || last_name == key || nickname == key || phone == key)
                return true;
            return false;
        }
};

std::string handle_string(std::string input)
{
    if (input.length() > 10)
    {
        input[9] = '.';
        input = input.substr(0, 10);
    }
    return input;
}
class phoneBook{
    public:
        Contact contacts[8];
        int available;
        phoneBook()
        {
            available = 0;
        }
        void ADD(std::string str, int id, int index)
        {
            if (id == 0)
                contacts[index].first_name = str;
            else if (id == 1)
                contacts[index].last_name = str;
            else if (id == 2)
                contacts[index].nickname = str;
            else if (id == 3)
                contacts[index].phone = str;
            else if (id == 4)
                contacts[index].darkest_secret = str;
        }
        void SEARCH()
        {
            std::string index;
            std::cout << GRN << std::setw (11) << "INDEX|";
            std::cout << std::setw (11) << "FIRST NAME|";
            std::cout << std::setw (11) << "LAST NAME|";
            std::cout << std::setw (11) << "NICKNAME|" << std::endl;
            std::cout << "--------------------------------------------\n" << WHT;
            for (int i = 0; i < available; i++)
            {
                index = std::to_string(i);
                std::cout << BLU << std::setw (11) << index + "|";
                std::cout << std::setw (11) << handle_string(contacts[i].first_name) + "|";
                std::cout << std::setw (11) << handle_string(contacts[i].last_name) + "|";
                std::cout << std::setw (11) << handle_string(contacts[i].nickname + "|") << std::endl << 
                WHT;
            }
        }
        void get_contact(int index)
        {
            if (index <= available)
            {
                std::cout << "INDEX: " << index;
                contacts[index].display_contact();
            }
        }
        int get_available()
        {
            return available;
        }
        void set_available()
        {
            available = (available >= 8) ? 8 : (available + 1);
        }
};

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
                std::cout << "NO CONTACTS AVAILABLE, GO ADD SOME!" << std::endl;
            else
            {
                std::cout << std::endl << YEL << "AVAILABLE CONTACTS: " << std::endl << std::endl << WHT ;
                p1.SEARCH();
                std::cout << std::endl << YEL << "ENTER INDEX OF DESIRED CONTACT: " << std::endl << WHT;
                std::cin >> input;
                std::cout << std::endl;
                p1.get_contact(input[0] - 48);
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