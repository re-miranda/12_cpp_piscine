#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap {
    public:
        FragTrap( std::string name );
        // Canonical
        FragTrap( void );
        FragTrap( FragTrap const & other );
        FragTrap &operator=( FragTrap const & other );
        ~FragTrap( void );

        void    highFiveGuys( void );
};
#endif
