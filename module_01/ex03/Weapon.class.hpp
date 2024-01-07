#ifndef WEAPON_CLASS_HPP
# define WEAPON_CLASS_HPP

# include <iostream>

class Weapon {
    public:
        Weapon( void );
        Weapon( std::string type );
        ~Weapon( void );
        std::string getType( void );
        void        setType( std::string input );
    private:
        std::string _type;
};
#endif
