#include "Fixed.hpp"

Fixed::~Fixed( void ) {
    // std::cout << "Destrutor called" << std::endl;
    return ;
}

Fixed::Fixed( void ): _fixed_point_nb_value() {
    // std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &fixed ) {
    // std::cout << "Copy constructor called" << std::endl;
    this->_fixed_point_nb_value = fixed.getRawBits();
    return ;
}

Fixed::Fixed( int const value ) {
    this->_fixed_point_nb_value = (value << this->_fixed_point_fractional_bits);
    return ;
}

Fixed::Fixed( float const value ) {
    this->_fixed_point_nb_value = roundf(value * (1 << this->_fixed_point_fractional_bits));
    return ;
}

Fixed & Fixed::operator=( Fixed const &fixed ) {
    // std::cout << "Copy assingment operator called" << std::endl;
    this->_fixed_point_nb_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    // std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_nb_value);
}

void    Fixed::setRawBits( int const raw ) {
    // std::cout << "setRawBits member function called" << std::endl;
   this->_fixed_point_nb_value = raw;
   return ;
}

float   Fixed::toFloat( void ) const {
    return (float)(this->_fixed_point_nb_value) / (1 << this->_fixed_point_fractional_bits);
}

int     Fixed::toInt( void ) const {
    return (int)(this->_fixed_point_nb_value >> this->_fixed_point_fractional_bits);
}

std::ostream &  operator<<( std::ostream &o, Fixed const &fixed ) {
    o << fixed.toFloat();
    return (o);
}

bool    Fixed::operator>( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value > fixed.getRawBits());
}

bool    Fixed::operator<( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value < fixed.getRawBits());
}

bool    Fixed::operator>=( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value >= fixed.getRawBits());
}

bool    Fixed::operator<=( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value <= fixed.getRawBits());
}

bool    Fixed::operator==( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value == fixed.getRawBits());
}

bool    Fixed::operator!=( Fixed const &fixed ) const {
    return (this->_fixed_point_nb_value != fixed.getRawBits());
}

Fixed   Fixed::operator++( void ) {
    this->_fixed_point_nb_value += 1;
    return (*this);
}

Fixed   Fixed::operator--( void ) {
    this->_fixed_point_nb_value -= 1;
    return (*this);
}

Fixed   Fixed::operator++( int ) {
    Fixed   preIncrementValue(*this);
    this->_fixed_point_nb_value += 1;
    return (preIncrementValue);
}

Fixed   Fixed::operator--( int ) {
    Fixed   preDecrementValue(*this);
    this->_fixed_point_nb_value -= 1;
    return (preDecrementValue);
}

Fixed  Fixed::operator*( Fixed const &value ) const {
    if (this->getRawBits() == 0 || value.getRawBits() == 0)
        return (0);
    return(this->toFloat() * value.toFloat());
}

Fixed  Fixed::operator/( Fixed const &value ) const {
    return (this->toFloat() / value.toFloat());
}

Fixed  Fixed::operator-( Fixed const &value ) const {
    Fixed ret_value = this->toFloat() - value.toFloat();
    return (ret_value);
}

Fixed  Fixed::operator+( Fixed const &value ) const {
    Fixed ret_value = this->toFloat() + value.toFloat();
    return (ret_value);
}

 Fixed Fixed::max( Fixed const &valueA, Fixed const &valueB ) {
    if (valueA.getRawBits() < valueB.getRawBits())
        return (Fixed(valueB));
    return (Fixed(valueA));
}

 Fixed Fixed::min( Fixed const &valueA, Fixed const &valueB ) {
    if (valueA.getRawBits() > valueB.getRawBits())
        return (Fixed(valueB));
    return (Fixed(valueA));
}
