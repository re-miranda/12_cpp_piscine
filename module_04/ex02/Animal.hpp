#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

    protected:

        Animal( void );
        Animal( Animal const & other );

        std::string _type;

    public:

        Animal  &operator=( Animal const & other );
        virtual ~Animal( void );

        // deixar makesound virtal e const = 0 (puro virtual)
        virtual void    makeSound( void ) const = 0;
        std::string     getType( void ) const;

};

#endif
