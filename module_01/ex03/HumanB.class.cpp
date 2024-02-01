#include "HumanB.class.hpp"

HumanB::HumanB( std::string name ): _name(name), _weapon() {
    return ;
}

HumanB::HumanB( std::string name, Weapon &weapon ): _name(name), _weapon(&weapon) {
    return ;
}

HumanB::~HumanB( void ) {
    return ;
}

void    HumanB::attack( void ) {
    if (this->_weapon == NULL)
        return ;
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon &weapon ) {
    this->_weapon = &weapon;
    return ;
}

