#include <iostream>
#include "Zombie.hpp"

Zombie *zombieHorde( int N, std::string name ) {
    Zombie *retvalue = new Zombie[N];

    for (int it = 0; it < N; it++)
        retvalue[it].set(name);
    return (retvalue);
}

