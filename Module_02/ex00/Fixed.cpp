#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::~Fixed(){

}

int Fixed::getRawBits() const{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixedPointValue;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    _fixedPointValue = raw;
}

Fixed &Fixed::operator=(const Fixed &obj){
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPointValue = obj.getRawBits();
    return *this;
}
