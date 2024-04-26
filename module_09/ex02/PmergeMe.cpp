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
	std::cout << "Before: ";
	std::for_each(_containerA.begin(), _containerA.end(), PmergeMe::_print);
	std::cout << std::endl;
	this->_timeA = this->_runSort(this->_containerA);
	this->_timeB = this->_runSort(this->_containerB);
	std::cout << "After : ";
	std::for_each(_containerA.begin(), _containerA.end(), PmergeMe::_print);
	std::cout << std::endl;
	// only for debug purposes, the other stack:
	std::cout << "After : ";
	std::for_each(_containerB.begin(), _containerB.end(), PmergeMe::_print);
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->_containerA.size() << " elements with std::[..] : " << this->_timeA << " us";
	std::cout << std::endl;
	std::cout << "Time to process a range of " << this->_containerB.size() << " elements with std::[..] : " << this->_timeB << " us";
	std::cout << std::endl;
}
template <typename T>
double	PmergeMe::_runSort( T & container ) {
	std::time(&this->_timer);
	this->_sort(container);
	for (int i = 0; i < 2000; i++)
		for (int j = 0; j < 2000; j++)
			for (int k = 0; k < 2000; k++)
				(void) (i + j + k);
	return (this->_timeEndDiff());
}
double	PmergeMe::_timeEndDiff( void ) {
	time_t	ntime;

	std::time(&ntime);
	return (std::difftime(ntime, this->_timer));
}
void	PmergeMe::_push( int value ) {
	this->_containerA.push_back(value);
	this->_containerB.push_back(value);
	return ;
}
void PmergeMe::_print( int const & value ) {
	std::cout << value << " ";
	return;
}
template <typename T>
void	PmergeMe::_sort( T & ContainerT) {
	std::sort(ContainerT.begin(), ContainerT.end());
	return ;
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
