#include <iostream>

#define DEBUG 0
#define INFO 1
#define WARNING 2
#define ERROR 3
#define INVALID -1
#define LEVEL_MAX 4

class   Harl {
    public:
        Harl( void );
        ~Harl( void );
        void    complain( std::string );
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
        int     levelResolver( std::string level );
};

