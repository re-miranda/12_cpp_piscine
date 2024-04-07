#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
    public:
        DiamondTrap( std::string name );
        // Canonical
        DiamondTrap( void );
        DiamondTrap( DiamondTrap const &other);
        DiamondTrap &operator=( DiamondTrap const &other);
        ~DiamondTrap( void );

        void    whoAmI( void );
        void attack( void );

    private:
        std::string _name;
};

#endif
