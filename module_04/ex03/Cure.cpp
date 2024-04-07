#include "Cure.hpp"

Cure::Cure( void ) : AMateria("cure") {
    return ;
}

Cure::Cure( Cure const &other ) : AMateria(other) { return ; }

Cure    &Cure::operator=( Cure const &other ) { (void)other; return (*this); }

AMateria    *Cure::clone( void ) const {
    AMateria    *heap_clone = new Cure(*this);
    return (heap_clone);
}

void    Cure::use( ICharacter &target ) {
    std::cout << "* heals " << target.getName() << "`s wounds *" << std::endl;
    return ;
}

Cure::~Cure( void ) { return ; }
