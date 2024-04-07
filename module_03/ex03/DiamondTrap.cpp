#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(), FragTrap(name), ScavTrap(name) {
    ScavTrap    tempScav(name);
    FragTrap    tempFrag(name);
    this->_name = name;
    this->ClapTrap::_name = this->ClapTrap::_getName() + "_clap_name";
    this->_hit_points = tempFrag.FragTrap::_getHitPoints();
    this->_energy_points = tempScav.ScavTrap::_getEnergyPoints();
    this->_damage = tempFrag.FragTrap::_getDamage();
    return ;
}

DiamondTrap::DiamondTrap( void ) : ClapTrap(), FragTrap("no_name"), ScavTrap("no_name") {
    ScavTrap    tempScav("no_name");
    FragTrap    tempFrag("no_name");
    this->_name = "no_name";
    this->ClapTrap::_name = this->ClapTrap::_getName() + "_clap_name";
    this->_hit_points = tempFrag.FragTrap::_getHitPoints();
    this->_energy_points = tempScav.ScavTrap::_getEnergyPoints();
    this->_damage = tempFrag.FragTrap::_getDamage();
    return ;
}

DiamondTrap::DiamondTrap( DiamondTrap const &other ) : ClapTrap(other), FragTrap(other), ScavTrap(other) { return ; }

DiamondTrap &DiamondTrap::operator=( DiamondTrap const &other ) {
    if (this == &other)
        return (*this);
    ClapTrap::operator=(other);
    FragTrap::operator=(other);
    ScavTrap::operator=(other);
    this->_name = other._name;
    return (*this);
}

void    DiamondTrap::whoAmI( void ) {
    std::cout << "I'm " << this->_name << " of " << ScavTrap::_name;
    std::cout << std::endl;
}

void    DiamondTrap::attack( void ) {
    ScavTrap::attack("somebody");
    return ;
}

DiamondTrap::~DiamondTrap( void ) { return ; }
