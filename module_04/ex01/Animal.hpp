#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {

    public:

        Animal( void );
        Animal( Animal const & other );
        Animal  &operator=( Animal const & other );
        virtual ~Animal( void );

        virtual void    makeSound( void ) const;
        std::string     getType( void ) const;

    protected:

        std::string _type;

};

#endif
