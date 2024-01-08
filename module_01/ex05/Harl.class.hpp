#include <iostream>

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
};

