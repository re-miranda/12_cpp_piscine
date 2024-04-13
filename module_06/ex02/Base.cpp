#include "Base.hpp"

Base::~Base( void )
{
    std::cout << "Base destructor called" << std::endl;
    return ;
}

A::A( void )
{
    std::cout << "A constructor called" << std::endl;
    return ;
}

A::~A( void )
{
    std::cout << "A destructor called" << std::endl;
    return ;
}

B::B( void )
{
    std::cout << "B constructor called" << std::endl;
    return ;
}

B::~B( void )
{
    std::cout << "B destructor called" << std::endl;
    return ;
}

C::C( void )
{
    std::cout << "C constructor called" << std::endl;
    return ;
}

C::~C( void )
{
    std::cout << "C destructor called" << std::endl;
    return ;
}
