#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <climits>

class ClapTrap {
    public:
        // Canonical
        ClapTrap( void );
        ClapTrap( ClapTrap const &other );
        ClapTrap    &operator=( ClapTrap const &other );
        ~ClapTrap( void );

        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    display( void );

        std::string _getName( void );
        int         _getHitPoints( void );
        int         _getEnergyPoints( void );
        int         _getDamage( void );

    private:
        std::string _name;
        int         _hit_points;
        int         _energy_points;
        int         _damage;
};

#endif
