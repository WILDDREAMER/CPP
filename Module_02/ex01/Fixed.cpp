#include "Fixed.hpp"

//Constructors
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int n) : _fixedPointValue(n << _fractionalBits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedPointValue(roundf(f * (1 << _fractionalBits)))
{
    std::cout << "Float constructor called" << std::endl;
}



//Operators overloading
std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPointValue = obj.getRawBits();
    return *this;
}

//Methods
int Fixed::getRawBits() const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    // std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}

float Fixed::toFloat() const
{
    // std::cout << "toFloat member function called" << std::endl;
    return (float)_fixedPointValue / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
    // std::cout << "toInt member function called" << std::endl;
    return _fixedPointValue >> _fractionalBits;
}