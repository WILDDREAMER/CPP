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

//operators overloading
//returnType operator symbol (arguments)

std::ostream &operator<<(std::ostream &os, const Fixed &obj)
{
    os << obj.toFloat();
    return os;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    _fixedPointValue = obj._fixedPointValue;
    return *this;
}

bool Fixed::operator>(const Fixed &obj) const
{
    return (_fixedPointValue > obj._fixedPointValue) ? true : false;
}

bool Fixed::operator<(const Fixed &obj) const
{
    return (_fixedPointValue < obj._fixedPointValue) ? true : false;
}

bool Fixed::operator>=(const Fixed &obj) const
{
    return (_fixedPointValue >= obj._fixedPointValue) ? true : false;
}

bool Fixed::operator<=(const Fixed &obj) const
{
    return (_fixedPointValue <= obj._fixedPointValue) ? true : false;
}

bool Fixed::operator==(const Fixed &obj) const
{
    return (_fixedPointValue == obj._fixedPointValue) ? true : false;
}

bool Fixed::operator!=(const Fixed &obj) const
{
    return (_fixedPointValue != obj._fixedPointValue) ? true : false;
}

Fixed Fixed::operator+(const Fixed &obj)
{
    Fixed result;
    result._fixedPointValue += obj._fixedPointValue;
    return result;
}

Fixed Fixed::operator-(const Fixed &obj)
{
    Fixed result;
    result._fixedPointValue -= obj._fixedPointValue;
    return result;
}

Fixed Fixed::operator*(const Fixed &obj)
{
    Fixed result;
    result._fixedPointValue = _fixedPointValue * obj._fixedPointValue;
    result._fixedPointValue >>= result._fractionalBits;

    return result;
}

Fixed Fixed::operator/(const Fixed &obj)
{
    Fixed result;
    result._fixedPointValue /= obj._fixedPointValue;
    return result;
}

Fixed &Fixed::operator++()
{
    _fixedPointValue++;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed result(*this);
    ++(*this);
    return result;
}

Fixed &Fixed::operator--()
{
    _fixedPointValue--;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed result(*this);
    --(*this);
    return result;
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

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a < b)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a > b)
        return a;
    else
        return b;
}