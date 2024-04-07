#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

# define FLOAT_MANTISSA 15

class   Fixed {
    public:
        ~Fixed( void );
        Fixed( void );
        Fixed( Fixed const &fixed );
        Fixed( int const value );
        Fixed( float const value );
        Fixed   &operator=( Fixed const &fixed );
        int     getRawBits( void ) const;
        void    setRawBits( int const raw );
        float   toFloat( void ) const;
        int     toInt( void ) const;

    private:
        int _fixed_point_nb_value;
        static const int _fixed_point_fractional_bits = 8;
};

std::ostream &  operator<<( std::ostream &o, Fixed const &fixed);

#endif
