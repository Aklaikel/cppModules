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
    Fixed(int const num);
    Fixed(float const flo);
    Fixed(const Fixed &fixed);
    ~Fixed();
    const Fixed &operator=(const Fixed &fixed);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream &operator <<(std::ostream &stream, Fixed const &obj);
