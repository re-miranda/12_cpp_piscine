#include "Character.hpp"

Character::Character( void ) : _name("undefined") {
    // std::cout << "Character Default Constructor Called" << std::endl;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    return ;
}

Character::Character( std::string const &name ) : _name(name) {
    // std::cout << "Character String Constructor Called" << std::endl;
    for(int i = 0; i < 4; i++)
        this->_inventory[i] = NULL;
    return ;
}

Character::Character( Character const &other ) : _name(other._name) {
    for(int i = 0; i < 4; i++) {
        this->_inventory[i] = other._inventory[i]->clone();
    }
    return ;
}

Character   &Character::operator=( Character const &other ) {
    AMateria    *swap;

    this->_name = other._name;
    for(int i = 0; i < 4; i++) {
        swap = _inventory[i];
        this->unequip(i);
        this->_inventory[i] = other._inventory[i]->clone();
        if (swap)
            delete(swap);
    }
    return (*this);
}

std::string const   &Character::getName( void ) const {
    // std::cout << "Character getName Called" << std::endl;
    return (this->_name);
}

void    Character::equip( AMateria *m ) {
    for(int i = 0; i < 4; i++) {
        if (this->_inventory[i] != NULL)
            continue;
        this->_inventory[i] = m;
        return ;
    }
    return ;
}

void    Character::unequip( int idx ) {
    // std::cout << "Character unequip Called" << std::endl;
    if (idx >= 0 && idx <= 3) {
        this->_inventory[idx] = NULL;
    }
    return ;
}

void    Character::use( int idx, ICharacter &target ) {
    // std::cout << "Character use Called" << std::endl;
    for(int i = 0; i < 4; i++) {
        if (i == idx && this->_inventory[i] != NULL)
            this->_inventory[i]->use(target);
    }
    return ;
}

Character::~Character( void ) {
    for(int i = 0; i < 4; i++) {
        if (this->_inventory[i] != NULL)
            delete (this->_inventory[i]);
    }
    return ;
}
