#include "Fixed.hpp"

Fixed::~Fixed( void ) {
    std::cout << "Destrutor called" << std::endl;
    return ;
}

Fixed::Fixed( void ): _fixed_point_nb_value() {
    std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed( Fixed const &fixed ) {
    std::cout << "Copy constructor called" << std::endl;
    this->_fixed_point_nb_value = fixed.getRawBits();
    return ;
}

Fixed & Fixed::operator=( Fixed const &fixed ) {
    std::cout << "Copy assingment operator called" << std::endl;
    this->_fixed_point_nb_value = fixed.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixed_point_nb_value);
}

void    Fixed::setRawBits( int const raw ) {
    std::cout << "setRawBits member function called" << std::endl;
   this->_fixed_point_nb_value = raw;
   return ;
}
