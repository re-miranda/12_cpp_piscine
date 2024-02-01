#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie {
    public:
        Zombie( void );
        Zombie( std::string name );
        ~Zombie( void );

        void    announce( void ) const;
        void    set( std::string name );

    private:
        std::string _name;
};

#endif

