#include "./contact.hpp"

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
