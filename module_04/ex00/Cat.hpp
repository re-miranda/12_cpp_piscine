#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal{

    public:

        Cat( void );
        Cat( Cat const & other );
        Cat  &operator=( Cat const & other );
        ~Cat( void );

        void        makeSound( void ) const;

};

#endif
