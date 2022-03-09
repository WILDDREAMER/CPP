#include "./StaticCast.hpp"

//Constructors
StaticCast::StaticCast()
{
    std::cout << "-" << std::endl;
}

StaticCast::~StaticCast()
{
    std::cout << "-" << std::endl;
}

StaticCast::StaticCast(std::string value): _value(value)
{}

StaticCast::StaticCast(const StaticCast &obj): _value(obj._value)
{}

StaticCast &StaticCast::operator=(const StaticCast &obj)
{
    (void)obj;
    return (*this);
}

//Methods

void StaticCast::convert() const
{
    float f = static_cast<float>(_value);
    char c = static_cast<char>(_value);
    int i = static_cast<int>(_value);
    double d = static_cast<double>(_value);

    std::cout << "float: " << f;
    if (ceil(f) != (static_cast<int>(f)))
        std::cout << ".0";
    std::cout << "f" << std::endl;
    std::cout << "double: ";
    if (ceil(f) != (static_cast<int>(f)))
        std::cout << ".00" << std::endl;
    std::cout << "int: " << i << std::endl;
    if (c > 31 && c < 128)
        std::cout << "char: " << c << std::endl;
    else
        std::cout<< "char:  Non displayable" << std::endl;
}
