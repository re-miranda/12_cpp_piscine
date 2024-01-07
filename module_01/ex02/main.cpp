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
    std::string brain_str("\"HI THIS IS BRAIN\"");
    std::string *stringPTR = &brain_str;
    std::string &stringREF = brain_str;

    std::cout << &brain_str << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;

    std::cout << brain_str << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
}

