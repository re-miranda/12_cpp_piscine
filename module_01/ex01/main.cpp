#include "Zombie.class.hpp"

Zombie  *newZombie( std::string name ) {
    return (new Zombie( name ));
}

void    randomChump( std::string name ) {
    Zombie stackZombie(name);
    stackZombie.announce();
    return ;
}

Zombie *zombieHorde( int N, std::string name ) {
    Zombie *retvalue = new Zombie[N];

    for (int it = 0; it < N; it++)
    {
        retvalue[it].set(name);
        retvalue[it].announce();
    }
    return (retvalue);
}

int main( void ) {
    Zombie  *zombieptr;
    Zombie  *horde;

    randomChump("renato");
    zombieptr = newZombie("marcela");
    zombieptr->announce();
    horde = zombieHorde(5, "Lucca");
    delete[](horde);
    delete(zombieptr);
    return (0);
}

