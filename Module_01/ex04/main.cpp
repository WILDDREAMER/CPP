#include <iostream>
#include <fstream>
# define RED "\e[1;31m"

void replace_(std::ifstream &input, char **argv)
{
    std::ofstream output;
    std::string::size_type n;
    std::string str;
    std::string filename = argv[1];

    output.open(filename + ".replace");
    while (std::getline(input, str)) {
        std::string s = argv[2];
        n = str.find(s);
        while (n != std::string::npos)
        {
            str.erase(n, strlen(argv[2]));
            str.insert(n, argv[3]);
            output << str.substr(0, n + strlen(argv[3]));
            str = str.substr(n + strlen(argv[3]));
            n = str.find(s);
        }
        if (n == std::string::npos)
            output << str << "\n";
    }
}

int main(int argc, char **argv)
{
    if (argc < 4)
    {
       std::cout << RED << "Missing informations!!" << "\n";
        return 0;
    }
    std::ifstream input;
    input.open(argv[1], std::fstream::in );
    if (input.fail())
    {
       std::cerr << "Error: " << strerror(errno);
       return 0;
    }
    replace_(input, argv);
}