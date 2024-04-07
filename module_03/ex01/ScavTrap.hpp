#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap {
    public:
        ScavTrap( std::string name );
        // Canonical
        ScavTrap( void );
        ScavTrap( ScavTrap const &other );
        ScavTrap    &operator=( ScavTrap const &other );
        ~ScavTrap( void );


        void    guardGate();
        void    attack(std::string const &target);
};

#endif
