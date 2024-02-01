#include "Zombie.hpp"

Zombie  *newZombie(std::string name);
void    randomChump(std::string name);

int main( void ) {
    Zombie  *zombieptr;

    randomChump("renato");
    zombieptr = newZombie("marcela");
    zombieptr->announce();
    return (0);
}

