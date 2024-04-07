#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter {

    public:

        Character( void );
        Character( std::string const &name );
        Character( Character const &other );
        Character   &operator=( Character const &other );
        ~Character( void );

        std::string const   &getName( void ) const;
        void                equip( AMateria *m );
        void                unequip( int idx );
        void                use( int idx, ICharacter &target );

    private:

        AMateria    *_inventory[4];
        std::string _name;

};

#endif
