#include "Zombie.hpp"

Zombie  *zombieHorde( int N, std::string name );

int main( void ) {
    Zombie  *horde;

    horde = zombieHorde(5, "Lucca");
    for (int it = 0; it < 5; it++)
        horde[it].announce();
    delete[](horde);
    return (0);
}

