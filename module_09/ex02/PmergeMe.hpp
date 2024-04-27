#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstddef>
#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const & other );
		~PmergeMe( void );
		PmergeMe &	operator=( PmergeMe const & other );

		void	load( int argc, char *argv[] );
		void	run( void );

	private:
		std::vector<int>	_containerA;
		std::deque<int>		_containerB;
		time_t				_timer;
		double				_timeA;
		double				_timeB;
	
		void		_push( int value );
		template	<typename iterator>
		double		_runSort( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_merge( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_pushswap( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_insertsort(std::pair<iterator, iterator> range);
		static void	_print( int const & value );
		double		_timeEndDiff( void );
};

std::ostream	&operator<<(std::ostream & o, PmergeMe & exchange);

#endif
