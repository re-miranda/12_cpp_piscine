#include "HumanB.class.hpp"

HumanB::HumanB( void ): name(), weapon() {
    return ;
}

HumanB::HumanB( std::string name ): name(name), weapon() {
    return ;
}

HumanB::HumanB( std::string name, Weapon weapon ): name(name), weapon(weapon) {
    return ;
}

HumanB::~HumanB( void ) {
    return ;
}

void    HumanB::attack( void ) {
    std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
    return ;
}

void    HumanB::setWeapon( Weapon weapon ) {
    this->weapon = weapon;
    return ;
}

