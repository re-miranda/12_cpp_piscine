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
    void    (Harl::*levels_array[LEVEL_MAX])(void);

    levels_array[DEBUG] = &Harl::debug;
    levels_array[INFO] = &Harl::info;
    levels_array[WARNING] = &Harl::warning;
    levels_array[ERROR] = &Harl::error;
    result = this->levelResolver(input);
    if (result == INVALID) {
        std::cout << "No complaints!" << std::endl;
        return ;
    }
    (this->*levels_array[result])();
    return ;
}

