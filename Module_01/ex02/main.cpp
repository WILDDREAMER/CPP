#include <iostream>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "Displaying address using the pointer: ";
    std::cout << stringPTR<< std::endl;
    std::cout << "Displaying address using the reference: ";
    std::cout << &stringREF << std::endl;

    std::cout << "Displaying the string using the pointer: ";
    std::cout << *stringPTR<< std::endl;
    std::cout << "Displaying the string using the reference: ";
    std::cout << stringREF<< std::endl;
}