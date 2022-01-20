#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
    int FixedPoint;
    static const int fractonalbits = 8;

public:
    Fixed();
    Fixed(const Fixed &rhs);
    Fixed &operator=(const Fixed &ref);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif