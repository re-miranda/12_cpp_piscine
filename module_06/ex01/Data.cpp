#include "Data.hpp"

Data::Data( void ) { return ; }

Data::Data( Data const &other ) : _random_int(other._random_int) { return ; }

Data    &Data::operator=( Data const &other ) { this->setInt(other.getInt()); return (*this); }

void    Data::setInt( int const & ix )
{
    this->_random_int = ix;
    return ;
}

int     Data::getInt( void ) const { return(this->_random_int); }

Data::~Data( void ) { return ; }
