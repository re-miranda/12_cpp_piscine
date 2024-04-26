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
	this->_runSort(this->_containerA);
	this->_runSort(this->_containerB);
}
template <typename T>
void	PmergeMe::_runSort( T & container ) {
	
	std::cout << "Sort before: ";
	std::for_each(container.begin(), container.end(), PmergeMe::_print);
	std::cout << std::endl;
	this->_timeStart();
	this->_sort(container);
	this->_timeEnd();
	std::cout << "after ( " << this->_time << " ): ";
	std::for_each(container.begin(), container.end(), PmergeMe::_print);
	std::cout << std::endl;
	return ;
}
void	PmergeMe::_timeStart( void ) {
	this->_time = 1;
	return ;
}
void	PmergeMe::_timeEnd( void ) {
	this->_time = 2 - this->_time;
	return ;
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
