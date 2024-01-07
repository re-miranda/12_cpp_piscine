#include "Weapon.class.hpp"

Weapon::Weapon( void ): _type() {
    return ;
}

Weapon::Weapon( std::string type): _type(type) {
    return ;
}

Weapon::~Weapon( void ) {
    return ;
}

std::string Weapon::getType( void ) {
    return (this->_type);
}

void Weapon::setType( std::string input ) {
    this->_type = input;
    return ;
}

