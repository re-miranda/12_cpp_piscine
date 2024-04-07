#ifndef MEGASTRING
#define MEGASTRING

#include <iostream>

class   MegaString {
    public:
        MegaString( void );
        ~MegaString( void );
        void    print_loud( char *input );

    private:
        std::string to_upper( std::string input );
        bool    is_first_run;
        void    trim_spaces( std::string &input );
};

#endif

