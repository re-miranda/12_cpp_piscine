#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <ostream>

class PmergeMe
{
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const & other );
		~PmergeMe( void );
		PmergeMe &	operator=( PmergeMe const & other );

	private:
};

std::ostream	&operator<<(std::ostream & o, PmergeMe & exchange);

#endif
