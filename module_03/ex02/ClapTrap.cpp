#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :_name("no_name"), _hit_points(10), _energy_points(10), _damage(0) {
    std::cout << "ClapTrap default constructor called" << std::endl;
    return ;
}

ClapTrap::ClapTrap( ClapTrap const &other ) : _name(other._name), _hit_points(other._hit_points), _energy_points(other._energy_points), _damage(other._damage) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    return ;
}

ClapTrap & ClapTrap::operator=( ClapTrap const &other ) {
    std::cout << "ClapTrap copy constructor called" << std::endl;
    _name = other._name;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _damage = other._damage;
    return (*this);
}

void    ClapTrap::attack(std::string const &target) {
    if (_energy_points == 0) {
        std::cout << "ClapTrap atack failed: no energy" << std::endl;
        return ;
    }
    this->_energy_points--;
    std::cout << this->_name << " ClapTrap attacks \"" << target  << "\", causing " << _damage << " damage!" << std::endl;
    return ;
}

void    ClapTrap::takeDamage(unsigned int amount) {
    std::cout << this->_name << " takes " << amount << " damage" << std::endl;
    this->_hit_points -= amount;
    if (this->_hit_points < 0)
        this->_hit_points = 0;
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount) {
    if (_energy_points == 0) {
        std::cout << this->_name << " repair failed, no more energy" << std::endl;
        return ;
    }
    std::cout << this->_name << " is being rapaired " << amount << std::endl;
    this->_energy_points--;
    if ((unsigned int)this->_hit_points + amount < INT_MAX)
        this->_hit_points += amount;
    else
        this->_hit_points = INT_MAX;
    return ;
}

void    ClapTrap::display( void ) {
    std::cout << this->_name << " hit_points:";
    std::cout << this->_hit_points << " energy_points:";
    std::cout << this->_energy_points << " damage:";
    std::cout << this->_damage << std::endl;
    return ;
}

std::string ClapTrap::_getName( void ) { return (this->_name); }

int ClapTrap::_getHitPoints( void ) { return (this->_hit_points); }

int ClapTrap::_getEnergyPoints( void ) { return (this->_energy_points); }

int ClapTrap::_getDamage( void ) { return (this->_damage); }

ClapTrap::~ClapTrap( void ) {
    std::cout << "ClapTrap destructor called" << std::endl;
    return ;
}
