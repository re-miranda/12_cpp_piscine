#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) {
    std::cout << "ScavTrap default constructor called" << std::endl;
    *this = ScavTrap("unnamed");
    return ;
}

ScavTrap::ScavTrap( ScavTrap const &other ): ClapTrap(other) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_damage = other._damage;
    std::cout << "ScavTrap Copy constructor called" << std::endl;
    return ;
}

ScavTrap::ScavTrap( std::string name) {
    this->_name = name;
    this->_hit_points = 100;
    this->_energy_points = 50;
    this->_damage = 20;
    std::cout << "ScavTrap string constructor called" << std::endl;
    return ;
}

ScavTrap    &ScavTrap::operator=( ScavTrap const &other ) {
    this->_name = other._name;
    this->_hit_points = other._hit_points;
    this->_energy_points = other._energy_points;
    this->_damage = other._damage;
    std::cout << "ScavTrap copy constructor called" << std::endl;
    return (*this);
}

void    ScavTrap::attack(std::string const &target) {
    if (_energy_points == 0) {
        std::cout << "ScavTrap attack failed: no energy" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << this->_name << " ScavTrap attacks \"" << target  << "\", causing " << _damage << " damage!" << std::endl;

    return ;
}

void    ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap is now in guard gate mode name:";
    std::cout << this->_name << " hit_points:";
    std::cout << this->_hit_points << " energy_points:";
    std::cout << this->_energy_points << " damage:";
    std::cout << this->_damage << std::endl;
    return ;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap destructor called" << std::endl;
    return ;
}
