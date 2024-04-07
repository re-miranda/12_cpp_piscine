#include "Dog.hpp"

Dog::Dog( void ) : Animal() {
    std::cout << "Dog default constructor called" << std::endl;
    this->_type = "Dog";
    this->thoughts = new Brain;
    return ;
}

Dog::Dog( Dog const & other ) : Animal(other){
    std::cout << "Dog copy constructor called" << std::endl;
    this->thoughts = new Brain(*other.thoughts);
    return ;
}

Dog &Dog::operator=( Dog const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "Dog assingment copy constructor called" << std::endl;
    this->Animal::operator=(other);
    delete (this->thoughts);
    this->thoughts = new Brain(*other.thoughts);
    return (*this);
}

void    Dog::makeSound( void ) const {
    std::cout << "auf auf! Dog" << std::endl;
    return ;
}

Dog::~Dog( void ) {
    std::cout << "Dog destructor called" << std::endl;
    delete (this->thoughts);
    return ;
}
