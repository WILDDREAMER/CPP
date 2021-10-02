#include "./phoneBook.hpp"

//phonebook
phoneBook::phoneBook()
{
    available = 0;
}

std::string handle_string(std::string input)
{
    if (input.length() > 10)
    {
        input[9] = '.';
        input = input.substr(0, 10);
    }
    return input;
}

void phoneBook::ADD(std::string str, int id, int index)
{
    if (id == 0)
        contacts[index].set_first_name(str);
    else if (id == 1)
        contacts[index].set_last_name(str);
    else if (id == 2)
        contacts[index].set_nickname(str);
    else if (id == 3)
        contacts[index].set_phone(str);
    else if (id == 4)
        contacts[index].set_darkest_secret(str);
}
void phoneBook::SEARCH()
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
        std::cout << std::setw (11) << handle_string(contacts[i].get_first_name()) + "|";
        std::cout << std::setw (11) << handle_string(contacts[i].get_last_name()) + "|";
        std::cout << std::setw (11) << handle_string(contacts[i].get_nickname() + "|") << std::endl << WHT;
    }
}
void phoneBook::get_contact(int index)
{
    if (index <= available)
    {
        std::cout << "INDEX: " << index;
        contacts[index].display_contact();
    }
}
int phoneBook::get_available()
{
    return available;
}
void phoneBook::set_available()
{
    available = (available >= 8) ? 8 : (available + 1);
}
