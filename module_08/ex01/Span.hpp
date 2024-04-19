#ifndef SPAN_HPP
# define SPAN_HPP

# include <algorithm>
#include <ostream>
# include <vector>

class Span
{
    public:
        Span( void );
        Span( unsigned int size );
        Span( Span const & other );
        ~Span( void );

        void        addNumber( int const & nb );
        int shortestSpan( void );
        int longestSpan( void );
        void	insert(std::vector<int>::iterator const &start, std::vector<int>::iterator const &end);

        std::vector<int>::iterator	min_elem( void );
        std::vector<int>::iterator	max_elem( void );
        unsigned int	getSize( void ) const;
        unsigned int	getElemCount( void ) const;
        int &	operator[](size_t const & index);

    private:
        Span &   operator=( Span const & other );

        std::vector<int>	_data;
        unsigned int		_size;
        unsigned int		_elem_count;
};

std::ostream	&operator<<(std::ostream & o, Span & span);

#endif
