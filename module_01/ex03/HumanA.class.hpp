#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.class.hpp"
# include <iostream>

class HumanA {
    public:
        HumanA( std::string name, Weapon &weapon );
        ~HumanA( void );

        void    attack( void );

    private:
        std::string _name;
        Weapon      &_weapon;
};
#endif
