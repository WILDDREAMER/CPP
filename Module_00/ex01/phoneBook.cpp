#include "phoneBook.hpp"
#include <iostream>
#include <iomanip>
#include <string>  

//contact
Contact::Contact(){
    first_name = "";
    last_name = "";
    nickname = "";
    phone = "";
    darkest_secret = "";
}

void Contact::display_contact()
{
    std::cout << std::endl << "FIRST NAME: " << first_name << std::endl << "LAST NAME: " << last_name << std::endl << "NICKNAME: " << nickname << std::endl;
}

// bool Contact::check_contact(std::string key)
// {
//     if (first_name == key || last_name == key || nickname == key || phone == key)
//         return true;
//     return false;
// }
//seters
void Contact::set_first_name(std::string first_name){
    this->first_name = first_name;
}
void Contact::set_last_name(std::string last_name){
    this->last_name = last_name;
}
void Contact::set_nickname(std::string nickname){
    this->nickname = nickname;
}
void Contact::set_phone(std::string phone){
    this->phone = phone;
}
void Contact::set_darkest_secret(std::string darkest_secret){
    this->darkest_secret = darkest_secret;
}

//geters
std::string Contact::get_first_name(){
    return first_name;
}
std::string Contact::get_last_name(){
    return last_name;
}
std::string Contact::get_nickname(){
    return nickname;
}

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
        std::getline (std::cin,command);
        if (str_toupper(command) == "ADD")
        {
            i = i % 8;
            std::cout << std::endl << BLK << "******************************************************\n";
            std::cout << BLU << "FIRST NAME: " << WHT;
            std::getline (std::cin,input);
            p1.ADD(input, 0, i);
            std::cout << BLU << "LAST NAME: " << WHT;
            std::getline (std::cin,input);
            p1.ADD(input, 1, i);
            std::cout << BLU << "NICKNAME: " << WHT;
            std::getline (std::cin,input);
            p1.ADD(input, 2, i);
            std::cout << BLU << "PHONE NUMBER: " << WHT;
            std::getline (std::cin,input);
            p1.ADD(input, 3, i);
            std::cout << BLU << "DARKEST SECRET: " << WHT;
            std::getline (std::cin,input);
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
                std::getline (std::cin,input);
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
