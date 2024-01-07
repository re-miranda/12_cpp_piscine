#ifndef HUMANB_CLASS_HPP
# define HUMANB_CLASS_HPP

# include "Weapon.class.hpp" 
# include <iostream>

class HumanB {
    public:
        HumanB( void );
        ~HumanB( void );
        HumanB( std::string name);
        HumanB( std::string name, Weapon weapon);

        std::string name;
        Weapon  weapon;
        void    attack( void );
        void    setWeapon( Weapon weapon );

    private:
};

#endif
