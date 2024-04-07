#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {

    public:

        WrongAnimal( void );
        WrongAnimal( WrongAnimal const & other );
        WrongAnimal  &operator=( WrongAnimal const & other );
        ~WrongAnimal( void );

        void        makeSound( void ) const;
        std::string getType( void ) const;

    protected:

        std::string _type;

};

#endif
