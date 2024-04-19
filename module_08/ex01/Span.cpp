#include "Span.hpp"
#include <limits>
#include <stdexcept>

Span::Span( void ) : _data(std::vector<int>(0)), _size(0), _elem_count(0)
{
    return ;
}

Span::Span( unsigned int size ) : _data(std::vector<int>(0)), _size(size), _elem_count(0)
{
    return ;
}

Span::Span( Span const & other ) : _data(other._data), _size(other._size), _elem_count(other._elem_count)
{
    return ;
}

Span &   Span::operator=( Span const & other )
{
    if (&other == this)
        return (*this);
    return (*this);
}

void        Span::addNumber( int const & nb )
{
	if (this->_elem_count == this->_size)
		throw std::logic_error("Span is full: could not add number");
    try
    {
        this->_data.push_back(nb);
        ++this->_elem_count;
    }
    catch (std::exception const & e)
    {
        throw;
    }
    return ;
}

std::vector<int>::iterator	Span::min_elem( void )
{
    return (std::min_element(this->_data.begin(), this->_data.end()));
}

std::vector<int>::iterator	Span::max_elem( void )
{
    return (std::max_element(this->_data.begin(), this->_data.end()));
}

int Span::shortestSpan( void )
{
    int result;

    if (this->_size < 2)
    	throw std::logic_error("Span is not big enough for comparison");
    result = std::numeric_limits<int>::max();
    std::sort(this->_data.begin(), this->_data.end());
    for (unsigned int ix = 0; ix < this->_size - 1; ++ix)
    	if (this->_data[ix + 1] - this->_data[ix] < result)
     		result = this->_data[ix + 1] - this->_data[ix];
    return (result);
}

int Span::longestSpan( void )
{
    int result;

    if (this->_size < 2)
    	throw std::logic_error("Span is not big enough for comparison");
    result = *this->max_elem() - *this->min_elem();
    return (result);
}

void	Span::insert(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end)
{
	if (std::distance(start, end) + this->_elem_count >= this->_size)
		throw std::logic_error("Span is not big enough for insertion");
	this->_data.insert(this->_data.end(), start, end);
	this->_elem_count += std::distance(start, end) + this->_elem_count;
}

unsigned int	Span::getSize( void ) const
{
	return (this->_size);
}

unsigned int	Span::getElemCount( void ) const
{
	return (this->_elem_count);
}

int &	Span::operator[](size_t const & index)
{
	if (index >= this->_elem_count)
		throw std::logic_error("Index out of bounds");
	return (this->_data[index]);
}

Span::~Span( void )
{
    return ;
}

std::ostream	&operator<<(std::ostream & o, Span & span)
{
	unsigned int	size;
	
	size = span.getElemCount();
	o << "( ";
	for (unsigned int ix = 0; ix < size; ++ix)
		o << span[ix] << " ";
	o << ")";
	return (o);
}
