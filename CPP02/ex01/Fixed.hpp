#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
private:
    int FixedPoint;
    static const int fractonalbits = 8;

public:
    Fixed();
    Fixed(int num);
    Fixed(float fnum);
    Fixed(const Fixed &rhs);
    Fixed &operator=(const Fixed &ref);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &f);

#endif