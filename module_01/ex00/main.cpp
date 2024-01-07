#include "Zombie.class.hpp"

Zombie  *newZombie( std::string name ) {
    return (new Zombie( name ));
}

void    randomChump( std::string name ) {
    Zombie stackZombie(name);
    stackZombie.announce();
    return ;
}

int main( void ) {
    Zombie  *zombieptr;

    randomChump("renato");
    zombieptr = newZombie("marcela");
    zombieptr->announce();
    return (0);
}

