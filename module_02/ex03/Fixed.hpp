#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <climits>
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

        bool    operator>( Fixed const &fixed ) const;
        bool    operator<( Fixed const &fixed ) const;
        bool    operator>=( Fixed const &fixed ) const;
        bool    operator<=( Fixed const &fixed ) const;
        bool    operator==( Fixed const &fixed ) const;
        bool    operator!=( Fixed const &fixed ) const;
        Fixed   operator++( void );
        Fixed   operator--( void );
        Fixed   operator++( int );
        Fixed   operator--( int );
        Fixed   operator*( Fixed const &value ) const;
        Fixed   operator/( Fixed const &value ) const;
        Fixed   operator-( Fixed const &value ) const;
        Fixed   operator+( Fixed const &value ) const;
        static Fixed   min( Fixed const &valueA, Fixed const &valueB );
        static Fixed   max( Fixed const &valueA, Fixed const &valueB );

    private:
        int _fixed_point_nb_value;
        static const int _fixed_point_fractional_bits = 8;
};

std::ostream &  operator<<( std::ostream &o, Fixed const &fixed);

#endif
