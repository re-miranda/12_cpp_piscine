#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ) {
	return ;
}
PmergeMe::PmergeMe( PmergeMe const & other ) {
	(void)other;
	return ;
}
PmergeMe &	PmergeMe::operator=( PmergeMe const & other ) {
	(void)other;
	return (*this);
}
void	PmergeMe::load(int argc, char *argv[] ) {
	while (--argc) {
		this->_push(std::atoi(*++argv));
	}
}
void	PmergeMe::_push( int value ) {
	this->_containerA.push_back(value);
	this->_containerB.push_back(value);
	return ;
}
void	PmergeMe::run( void ) {
	std::cout << "Before: ";
	std::for_each(_containerA.begin(), _containerA.end(), PmergeMe::_print);
	std::cout << std::endl;

	this->_timeTakenA = this->_runSort(std::make_pair(this->_containerA.begin(), this->_containerA.end()));
	this->_timeTakenB = this->_runSort(std::make_pair(this->_containerB.begin(), this->_containerB.end()));

	std::cout << "After (vector): ";
	std::for_each(_containerA.begin(), _containerA.end(), PmergeMe::_print);
	std::cout << std::endl;
	// For debug purposes, the other container:
	std::cout << "After (deque): ";
	std::for_each(_containerB.begin(), _containerB.end(), PmergeMe::_print);
	std::cout << std::endl;
	// continue...

	std::cout << "Time to process a range of " << this->_containerA.size() << " elements with std::vector : " << this->_timeTakenA << " us";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->_containerB.size() << " elements with std::deque : " << this->_timeTakenB << " us";
	std::cout << std::endl;
}
template <typename iterator>
size_t	PmergeMe::_runSort(std::pair<iterator, iterator> range) {
	struct timeval	start;
	struct timeval	end;

	gettimeofday(&start, NULL);
	this->_sort_merge(range);
	gettimeofday(&end, NULL);
	timersub(&end, &start, &end);
	return (end.tv_sec + end.tv_usec);
}
template <typename iterator>
void	PmergeMe::_sort_merge( std::pair<iterator, iterator> range ) {
	iterator	middle;

	middle = range.first + (std::distance(range.first, range.second) / 2);
	if (std::distance(range.first, range.second) > 10) {
		this->_sort_merge(std::make_pair(range.first, middle));
		this->_sort_merge(std::make_pair(middle, range.second));
		this->_sort_pushswap(range);
	}
	else
		this->_sort_insertsort(range);
	return ;
}
template <typename iterator>
void	PmergeMe::_sort_pushswap( std::pair<iterator, iterator> range ) {
	std::vector<int>	copy(distance(range.first, range.second));
	size_t		middle;
	iterator	it;
	iterator	itm;

	middle = std::distance(range.first, range.second) / 2;
	it = range.first;
	itm = range.first + middle;
	for (size_t ix = 0; range.first + ix < range.second; ix++) {
		if (it < range.first + middle && (itm >= range.second || *it <= *itm))
			copy[ix] = *it++;
		else {
			copy[ix] = *itm++;
		}
	}
	for (size_t ix = 0; range.first + ix < range.second; ix++) {
		*(range.first + ix) = copy[ix];
	}
	return ;
}
template <typename iterator>
void	PmergeMe::_sort_insertsort(std::pair<iterator, iterator> range) {
	iterator	it;
	iterator	itx;
	size_t	previous;
	size_t	current;

	it = range.first;
	while (it < range.second) {
		current = *it;
		itx = it;
		while (itx > range.first) {
			previous = *(itx - 1);
			if (current < previous)
				*itx = previous;
			else
				break ;
			--itx;
		}
		*itx = current;
		++it;
	}
	return ;
}
void PmergeMe::_print( int const & value ) {
	std::cout << value << " ";
	return;
}
PmergeMe::~PmergeMe( void )
{
	return ;
}
std::ostream	&operator<<(std::ostream & o, PmergeMe & pm)
{
	(void)pm;
	return (o);
}
