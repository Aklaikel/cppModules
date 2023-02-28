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
    static const Fixed &max(const Fixed &a, const Fixed &b);
    static  Fixed &max( Fixed &a,Fixed &b);
    static const Fixed &min(const Fixed &a, const Fixed &b);
    static  Fixed &min( Fixed &a,Fixed &b);
    Fixed &operator++();
    Fixed &operator++( int );
    Fixed &operator--();
    Fixed &operator--( int );
    Fixed operator+(const Fixed &fixed);
    Fixed operator-(const Fixed &fixed);
    Fixed operator*(const Fixed &fixed);
    Fixed operator/(const Fixed &fixed);
    bool operator>(const Fixed &fixed) const;
    bool operator<(const Fixed &fixed) const;
    bool operator>=(const Fixed &fixed) const;
    bool operator<=(const Fixed &fixed) const;
    bool operator==(const Fixed &fixed) const;
    bool operator!=(const Fixed &fixed) const;
    int getRawBits( void ) const;
    void setRawBits( int const raw );
    float toFloat( void ) const;
    int toInt( void ) const;
};
std::ostream &operator <<(std::ostream &stream, Fixed const &obj);
