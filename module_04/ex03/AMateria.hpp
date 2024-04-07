#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class ICharacter ;

class AMateria {

    protected:

        std::string const   _type;

    public:

        AMateria( void );
        AMateria( std::string const & type );
        AMateria( AMateria const &other );
        AMateria    &operator=( AMateria const &other );
        virtual    ~AMateria( void );

        std::string const   &getType( void ) const; //Returns the materia type
        virtual AMateria    *clone( void ) const = 0;
        virtual void        use( ICharacter &target );

};

#endif
