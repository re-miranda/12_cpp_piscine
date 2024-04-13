#include <iostream>
#include <cstdlib>
#include "Base.hpp"

Base    *generate( void );
void    identify( Base *p );
void    identify( Base &p );

int main( void )
{
    Base    *X;

    X = generate();
    identify(X);
    identify(*X);
    delete (X);

    return (0);
}

Base    *generate( void )
{
    srand(time(NULL));
    switch (rand() % 3)
    {
        case 0:
            return (new A());
            break ;

        case 1:
            return (new B());
            break ;

        default:
            return (new C());
            break ;
    }
}

void    identify( Base *p )
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Type is A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Type is B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Type is C" << std::endl;
    else
        std::cout << "Type unknown" << std::endl;
    return ;
}

void    identify( Base &p )
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "Type is A" << std::endl;
        return ;
    }
    catch ( std::exception const &e )
    {
    }
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "Type is B" << std::endl;
        return ;
    }
    catch ( std::exception const &e )
    {
    }
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "Type is C" << std::endl;
        return ;
    }
    catch ( std::exception const &e )
    {
    }
    std::cout << "Type unknown" << std::endl;
    return ;
}
