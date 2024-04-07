#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain default constructor called" << std::endl;
    return ;
}

Brain::Brain( Brain const & other ) {
    std::cout << "Brain copy constructor called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return ;
}

Brain   &Brain::operator=( Brain const & other ) {
    if (&other == this)
        return (*this);
    std::cout << "Brain assingment operator called" << std::endl;
    for (int i = 0; i < 100; i++) {
        this->ideas[i] = other.ideas[i];
    }
    return (*this);
}

Brain::~Brain( void ) {
    std::cout << "Brain destructor called" << std::endl;
    return ;
}
