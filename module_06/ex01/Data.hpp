#ifndef DATA_HPP
# define DATA_HPP

class Data
{
    public:

        Data( void );
        Data( Data const &other );
        Data    &operator=( Data const &other );
        ~Data( void );

        int     getInt( void ) const ;
        void    setInt( int const & ix );

    private:

        int _random_int;
};

#endif
