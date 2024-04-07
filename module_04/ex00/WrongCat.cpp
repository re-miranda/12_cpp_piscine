#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal() {
    std::cout << "WrongCat default constructor called" << std::endl;
    this->_type = "WrongCat";
    return ;
}

WrongCat::WrongCat( WrongCat const & other ) : WrongAnimal(other) {
    std::cout << "WrongCat copy constructor called" << std::endl;
    return ;
}

WrongCat &WrongCat::operator=( WrongCat const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "WrongCat assingment copy constructor called" << std::endl;
    this->WrongAnimal::operator=(other);
    return (*this);
}

void    WrongCat::makeSound( void ) const {
    std::cout << "meeaau! WrongCat" << std::endl;
    return ;
}

WrongCat::~WrongCat( void ) {
    std::cout << "WrongCat destructor called" << std::endl;
    return ;
}
