#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <vector>

class PmergeMe
{
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const & other );
		~PmergeMe( void );
		PmergeMe &	operator=( PmergeMe const & other );

		void	load( int argc, char *argv[] );

	private:
		std::vector<int>	_containerA;
		std::vector<int>	_containerB;
		int					_time;
	
		void		_push( int value );
		template <typename T>
		void	_runSort( T & container );
		template	<typename T>
		void		_sort( T & ContainerT);
		static void	_print( int const & value );
		void		_timeStart( void );
		void		_timeEnd( void );
};

std::ostream	&operator<<(std::ostream & o, PmergeMe & exchange);

#endif
