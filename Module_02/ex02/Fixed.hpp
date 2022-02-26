#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int						_fixedPointValue;
    static const int		_fractionalBits = 8;

public:
    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed &obj);
    ~Fixed();
    Fixed &operator=(const Fixed &obj);

    bool operator>(const Fixed &obj) const;
    bool operator<(const Fixed &obj) const;
    bool operator>=(const Fixed &obj) const;
    bool operator<=(const Fixed &obj) const;
    bool operator==(const Fixed &obj) const;
    bool operator!=(const Fixed &obj) const;

    Fixed operator+(const Fixed &obj);
    Fixed operator-(const Fixed &obj);
    Fixed operator*(const Fixed &obj);
    Fixed operator/(const Fixed &obj);
    Fixed &operator++();
    Fixed operator++(int);
    Fixed &operator--();
    Fixed operator--(int);

    float toFloat(void) const;
    int toInt(void) const;
    int getRawBits(void) const;
    void setRawBits(int const raw);
    static Fixed &min(Fixed &a, Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static Fixed &max(Fixed &a, Fixed &b);
    static const Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif