#include "PmergeMe.hpp"
#include <algorithm>
#include <cstddef>
#include <iterator>

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
int	PmergeMe::_runSort( T & container ) {
	int	time;
	time = _timeStart();
	this->_sort(container);
	time = _timeEnd(time);
	return (time);
}
int PmergeMe::_timeStart( void ) {
	return (1);
}
int	PmergeMe::_timeEnd( int const & time ) {
	return (2 - time);
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
