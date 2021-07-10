#include <iostream>

class Contact{
    public:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;

        void init(std::string first_name, std::string last_name, std::string nickname, std::string phone, std::string darkest_secret)
        {
            first_name = first_name;
            last_name = last_name;
            nickname = nickname;
            phone = phone;
            darkest_secret = darkest_secret;
        }
        Contact(){
            first_name = "";
            last_name = "";
            nickname = "";
            phone = "";
            darkest_secret = "";
        }
        void display_contact(std::string separator)
        {
            std::cout << separator << "FIRST NAME: " << first_name << separator << "LAST NAME: " << last_name << separator << "NICKNAME: " << nickname << std::endl;
        }

        bool check_contact(std::string key)
        {
            if (first_name == key || last_name == key || nickname == key || phone == key)
                return true;
            return false;
        }
};

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
            available++;
            available = available % 8;
        }
        void SEARCH(std::string key)
        {
            for (size_t i = 0; i < available; i++)
            {
                std::cout << "INDEX: " << i;
                contacts[i].display_contact(" | ");
            }
        }
        void get_contact(int index)
        {
            if (index <= available)
            {
                std::cout << "INDEX: " << index;
                contacts[index].display_contact("\n");
            }
        }
        int get_available()
        {
            return available;
        }
        void set_available(int available_)
        {
            available = available_;
        }
};

std::string handle_input(std::string input)
{
    if (input.length() > 10)
    {
        input[9] = '.';
        input = input.substr(0, 10);
    }
    return input;
}

int main(int argc, char **argv)
{
    phoneBook p1;
    std::string command;
    std::string input;
    int i = 0;

    while (1)
    {
        std::cout << "ENTER A COMMAND: (ADD, SEARCH, EXIT)" << std::endl << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
        {
            std::cout << "FIRST NAME: ";
            std::getline(std::cin,input);
            std::cout << "oussa";
            input = handle_input(input);
            p1.ADD(input, 0, i);
            std::cout << "LAST NAME: ";
            std::getline(std::cin,input);
            input = handle_input(input);
            p1.ADD(input, 1, i);
            std::cout << "NICKNAME: ";
            std::getline(std::cin,input);
            input = handle_input(input);
            p1.ADD(input, 2, i);
            std::cout << "PHONE NUMBER: ";
            std::getline(std::cin,input);
            input = handle_input(input);
            p1.ADD(input, 3, i);
            std::cout << "DARKEST SECRET: ";
            std::getline(std::cin,input);
            input = handle_input(input);
            p1.ADD(input, 4, i);
            p1.set_available(i + 1);
        }
        else if (command == "SEARCH")
        {
            if (!p1.get_available())
                std::cout << "NO CONTACTS AVAILABLE, GO ADD SOME." << std::endl;
            else
            {
                std::cout << "AVAILABLE CONTACTS: " << std::endl;
                p1.SEARCH(input);
                std::cout << "ENTER INDEX OF DESIRED CONTACT: " << std::endl;
                std::cin >> input;
                p1.get_contact(std::stoi(input));
            }
        }
        else if (command == "EXIT")
        {
            exit(EXIT_SUCCESS);
        }
    }
    return (0);
}