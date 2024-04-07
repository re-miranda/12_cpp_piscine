#include "Ice.hpp"

Ice::Ice( void ) : AMateria("ice") {
    return ;
}

Ice::Ice( Ice const &other ) : AMateria(other) { return ; }

Ice &Ice::operator=( Ice const &other ) { (void)other; return (*this); }

AMateria    *Ice::clone( void ) const {
    AMateria    *heap_clone = new Ice(*this);
    return (heap_clone);
}

void    Ice::use( ICharacter &target ) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    return ;
}

Ice::~Ice( void ) { return ; }
