#ifndef MEGASTRING
#define MEGASTRING

#include <iostream>

class   MegaString {
    public:
        MegaString( void );
        ~MegaString( void );
        void    print_loud( char *input );
        void    trim_spaces( std::string &input );

    private:
        std::string to_upper( std::string input );
        bool    is_first_run;
};

#endif
