#include "AMateria.hpp"

AMateria::AMateria( void ) : _type("undefined") { return ; }

AMateria::AMateria( AMateria const &other ) : _type(other._type) { return ; }

AMateria::AMateria( std::string const & type ) : _type(type) { return ; }

AMateria  &AMateria::operator=( AMateria const &other ) {
    (void)other;
    // this->_type = other._type;
    return (*this);
}

std::string const   &AMateria::getType( void ) const {
    return (this->_type);
}

void    AMateria::use( ICharacter &target ) {
    std::cout << "AMateria of type: " << this->_type << " is being used by: " << target.getName() << std::endl;
    return ;
}

AMateria::~AMateria( void ) { return ; }
