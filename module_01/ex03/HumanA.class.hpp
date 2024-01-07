#ifndef HUMANA_CLASS_HPP
# define HUMANA_CLASS_HPP

# include "Weapon.class.hpp"
# include <iostream>

class HumanA {
    public:
        HumanA( void );
        ~HumanA( void );
        HumanA( std::string name, Weapon weapon );

        std::string name;
        Weapon  weapon;
        void    attack( void );

    private:
};
#endif
