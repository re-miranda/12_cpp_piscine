#include "FragTrap.hpp"

FragTrap::FragTrap( std::string name ) {
    std::cout << "FragTrap constructor called" << std::endl;
    _name = name;
    _hit_points = 100;
    _energy_points = 100;
    _damage = 30;
    return ;
}

FragTrap::FragTrap( void ) {
    std::cout << "FragTrap default constructor called" << std::endl;
    *this = FragTrap("unnamed");
    return ;
}

FragTrap::FragTrap( FragTrap const &other ): ClapTrap(other) {
    std::cout << "FragTrap copy constructor called" << std::endl;
    return ;
}

FragTrap & FragTrap::operator=( FragTrap const &other) {
    std::cout << "FragTrap assingment operator called" << std::endl;
    _name = other._name;
    _hit_points = other._hit_points;
    _energy_points = other._energy_points;
    _damage = other._damage;
    return (*this);
}

void    FragTrap::highFiveGuys( void ) {
    std::cout << "(" << this->_name << ") Lets high at five!"<< std::endl;
    return ;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap destructor called" << std::endl;
    return ;
}
