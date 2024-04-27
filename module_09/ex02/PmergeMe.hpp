#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <cstddef>
#include <iostream>
#include <vector>
#include <sys/time.h>
#include <algorithm>
#include <deque>

class PmergeMe
{
	public:
		PmergeMe( void );
		~PmergeMe( void );

		void	load( int argc, char *argv[] );
		void	run( void );

	private:
		PmergeMe( PmergeMe const & other );
		PmergeMe &	operator=( PmergeMe const & other );

		std::vector<int>	_containerA;
		std::deque<int>		_containerB;
		suseconds_t			_timeTakenA;
		suseconds_t			_timeTakenB;
	
		void		_push( int value );
		template	<typename iterator>
		size_t	_runSort( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_merge( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_pushswap( std::pair<iterator, iterator> range );
		template	<typename iterator>
		void		_sort_insertsort(std::pair<iterator, iterator> range);
		static void	_print( int const & value );
};

#endif
