#include "Cat.hpp"

Cat::Cat( void ) : Animal() {
    std::cout << "Cat default constructor called" << std::endl;
    this->_type = "Cat";
    this->thoughts = new Brain;
    return ;
}

Cat::Cat( Cat const & other ) : Animal(other) {
    std::cout << "Cat copy constructor called" << std::endl;
    this->thoughts = new Brain(*other.thoughts);
    return ;
}

Cat &Cat::operator=( Cat const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "Cat assingment copy constructor called" << std::endl;
    this->Animal::operator=(other);
    delete(this->thoughts);
    this->thoughts = new Brain(*other.thoughts);
    return (*this);
}

void    Cat::makeSound( void ) const {
    std::cout << "meeaau! Cat" << std::endl;
    return ;
}

Cat::~Cat( void ) {
    std::cout << "Cat destructor called" << std::endl;
    delete(this->thoughts);
    return ;
}
