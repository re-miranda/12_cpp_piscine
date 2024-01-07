#include "Zombie.class.hpp"

Zombie::Zombie( void ): _name() {
    return ;
}

Zombie::Zombie( std::string name ): _name( name ) {
    return ;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name << ": destroyed" << std::endl;
    return ;
}

void    Zombie::announce( void ) const {
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::set( std::string name ) {
    _name = name;
}

