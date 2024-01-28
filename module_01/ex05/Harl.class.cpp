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
    std::cout << "Info" << std::endl;
    return ;
}

void    Harl::warning( void ) {
    std::cout << "Warning" << std::endl;
    return ;
}

void    Harl::error( void ) {
    std::cout << "Error" << std::endl;
    return ;
}

int     Harl::levelResolver( std::string level ) {
    if (level.compare("DEBUG") == 0)
        return (DEBUG);
    if (level.compare("INFO") == 0)
        return (INFO);
    if (level.compare("WARNING") == 0)
        return (WARNING);
    if (level.compare("ERROR") == 0)
        return (ERROR);
    return (INVALID);
}

void    Harl::complain( std::string input ) {
    int     result;
    void    (Harl::*levels_array[4])(void);

    levels_array[0] = &Harl::debug;
    levels_array[1] = &Harl::info;
    levels_array[2] = &Harl::warning;
    levels_array[3] = &Harl::error;
    result = this->levelResolver(input);
    if (result < 0) {
        std::cout << "No complaints!" << std::endl;
        return ;
    }
    (this->*levels_array[result])();
    return ;
}

