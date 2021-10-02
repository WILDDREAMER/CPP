#ifndef CONTACT_H
# define CONTACT_H

# include <iostream>
# include <iomanip>
# include <string> 

# define WHT "\e[0;37m"
# define BLK "\e[1;30m"
# define RED "\e[1;31m"
# define GRN "\e[1;32m"
# define YEL "\e[1;33m"
# define BLU "\e[1;34m"
# define MAG "\e[1;35m"
# define CYN "\e[1;36m"

class Contact{
    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone;
        std::string darkest_secret;
    public:
        Contact();
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        void set_nickname(std::string nickname);
        void set_phone(std::string phone);
        void set_darkest_secret(std::string darkest_secret);
        std::string get_first_name();
        std::string get_last_name();
        std::string get_nickname();
        void display_contact();
        bool check_contact(std::string key);
};

#endif