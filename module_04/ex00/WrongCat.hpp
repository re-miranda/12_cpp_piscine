#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

    public:

        WrongCat( void );
        WrongCat( WrongCat const & other );
        WrongCat  &operator=( WrongCat const & other );
        ~WrongCat( void );

        void        makeSound( void ) const;

};

#endif
