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
    switch (this->levelResolver(input)) {
        case DEBUG:
            this->debug();
        case INFO:
            this->info();
        case WARNING:
            this->warning();
        case ERROR:
            this->error();
        default:
            std::cout << "No complaints!" << std::endl;
            break;
    }
    return ;
}

