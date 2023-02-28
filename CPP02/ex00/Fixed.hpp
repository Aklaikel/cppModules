#pragma once
#include<iostream>
#include<string>

class Fixed
{
private:
    int FixedValue;
    static const int    nb_bits = 8;
public:
    Fixed();
    Fixed(const Fixed &fixed);
    ~Fixed();
    const Fixed &operator=(const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
