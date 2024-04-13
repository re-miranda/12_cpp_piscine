#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include "Data.hpp"
# include <stdint.h>

class Data ;

class Serializer
{
    public:

        static uintptr_t    serialize( Data *ptr );
        static Data         *deserialize( uintptr_t raw );

    private:

        Serializer( void );
        Serializer( Serializer const &other );
        Serializer  &operator=( Serializer const &other );
        virtual ~Serializer( void );
};

#endif
