#include"Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->FixedValue = 0;
}

Fixed::Fixed(const Fixed &fixed) {
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
    return this->FixedValue;
}

void Fixed::setRawBits( int const raw ) {
    this->FixedValue = raw;
}

Fixed const &Fixed::operator=(const Fixed &fixed) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->setRawBits(fixed.getRawBits());
    return *this;
}

Fixed::Fixed(int const num) {
    std::cout << "Int constructor called" << std::endl;
    setRawBits(num * (1 << nb_bits));
}

Fixed::Fixed(float const flo) {
    std::cout << "Float constructor called" << std::endl;
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