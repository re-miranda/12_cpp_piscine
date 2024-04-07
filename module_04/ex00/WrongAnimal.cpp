#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : _type("Generic wrong animal") {
    std::cout << "WrongAnimal default constructor called" << std::endl;
    return ;
}

WrongAnimal::WrongAnimal( WrongAnimal const & other ) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->_type = other._type;
    return ;
}

WrongAnimal &WrongAnimal::operator=( WrongAnimal const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "WrongAnimal assingment copy constructor called" << std::endl;
    this->_type = other._type;
    return (*this);
}

 void   WrongAnimal::makeSound( void ) const {
    std::cout << "The sound of a " << this->_type << " is played" << std::endl;
    return ;
}

std::string WrongAnimal::getType( void ) const {
    return (this->_type);
}

WrongAnimal::~WrongAnimal( void ) {
    std::cout << "WrongAnimal destructor called" << std::endl;
    return ;
}
