#include"Fixed.hpp"

Fixed::Fixed()
{
    this->FixedValue = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    *this = fixed;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const {
    return this->FixedValue;
}

void Fixed::setRawBits( int const raw ) {
    this->FixedValue = raw;
}

Fixed const &Fixed::operator=(const Fixed &fixed) {
    this->setRawBits(fixed.getRawBits());
    return *this;
}

Fixed::Fixed(int const num) {
    setRawBits(num * (1 << nb_bits));
}

Fixed::Fixed(float const flo) {
    setRawBits(roundf(flo * (1 << nb_bits)));
}

float Fixed::toFloat( void ) const{
    return ((float)this->getRawBits()) / (1 << nb_bits);
}

int Fixed::toInt( void ) const{
    return (getRawBits() / (1 << nb_bits));
}

std::ostream &operator <<(std::ostream &stream, Fixed const &obj) {
    stream << obj.toFloat();
    return stream;
}

// The 6 comparison operators:
bool Fixed::operator>(const Fixed &fixed) const {
    return this->getRawBits() > fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &fixed) const {
    return this->getRawBits() < fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &fixed) const {
    return this->getRawBits() >= fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &fixed) const {
    return this->getRawBits() <= fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &fixed) const {

    return this->getRawBits() == fixed.getRawBits();
}
bool Fixed::operator!=(const Fixed &fixed) const {
    return this->getRawBits() != fixed.getRawBits();
}

//The 4 arithmetic operators:
Fixed Fixed::operator+(const Fixed &fixed) {
    Fixed copy(this->toFloat() + fixed.toFloat());
    return copy;
}

Fixed Fixed::operator-(const Fixed &fixed) {
    Fixed copy(this->toFloat() - fixed.toFloat());
    return copy;
}

Fixed Fixed::operator*(const Fixed &fixed) {
    Fixed copy(this->toFloat() * fixed.toFloat());
    return copy;
}

Fixed Fixed::operator/(const Fixed &fixed) {
    Fixed copy(this->toFloat() / fixed.toFloat());
    return copy;
}

Fixed &Fixed::operator++() {
    ++this->FixedValue;
    return (*this);
}

Fixed &Fixed::operator++( int ) {
    ++this->FixedValue;
    return (*this);
}

Fixed &Fixed::operator--() {
    --this->FixedValue;
    return (*this);
}

Fixed &Fixed::operator--( int ) {
    --this->FixedValue;
    return (*this);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
     return a > b ? a : b;
 }

Fixed &Fixed::max( Fixed &a,  Fixed &b) {
     return a > b ? a : b;
 }

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
     return a > b ? b : a;
 }

Fixed &Fixed::min( Fixed &a,  Fixed &b) {
     return a > b ? b : a;
 }
 Fixed Fixed::abs() {
     Fixed copy(std::abs(this->toFloat()));
     return (copy);
 }