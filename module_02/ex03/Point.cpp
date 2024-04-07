#include "Point.hpp"


Point::~Point( void ) { return ; }

Point::Point( void ) : _x(0), _y(0) { return ; }

Point::Point( Point const &other ) : _x(other._x), _y(other._y) { return ; }

Point::Point( float const x, float const y ) : _x(x), _y(y) { return ; }

Point   &Point::operator=( Point const &other ) { (void)other; return (*this) ; }

Fixed   Point::getX( void ) const { return (this->_x); }

Fixed   Point::getY( void ) const { return (this->_y); }
