#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "./contact.hpp"

class phoneBook{
    private:
        Contact contacts[8];
        int available;
    public:
        phoneBook();
        void ADD(std::string str, int id, int index);
        void SEARCH();
        void get_contact(int index);
        int get_available();
        void set_available();
};

#endif