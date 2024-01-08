#include "Harl.class.hpp"

Harl::Harl( void ) {
    return ;
}

Harl::~Harl ( void ) {
    return ;
}

void    Harl::debug( void ) {
    std::cout << "Debug" << std::endl;
    return ;
}

void    Harl::info( void ) {
    std::cout << "info" << std::endl;
    return ;
}

void    Harl::warning( void ) {
    std::cout << "warning" << std::endl;
    return ;
}

void    Harl::error( void ) {
    std::cout << "Error" << std::endl;
    return ;
}

void    Harl::complain( std::string ) {
    this->error();
    return ;
}

