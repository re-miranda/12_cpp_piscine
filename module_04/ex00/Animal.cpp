#include "Animal.hpp"

Animal::Animal( void ) : _type("Generic animal") {
    std::cout << "Animal default constructor called" << std::endl;
    return ;
}

Animal::Animal( Animal const & other ) {
    std::cout << "Animal copy constructor called" << std::endl;
    this->_type = other._type;
    return ;
}

Animal &Animal::operator=( Animal const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "Animal assingment copy constructor called" << std::endl;
    this->_type = other._type;
    return (*this);
}

 void   Animal::makeSound( void ) const {
    std::cout << "The sound of a " << this->_type << " is played" << std::endl;
    return ;
}

std::string Animal::getType( void ) const {
    return (this->_type);
}

Animal::~Animal( void ) {
    std::cout << "Animal destructor called" << std::endl;
    return ;
}
