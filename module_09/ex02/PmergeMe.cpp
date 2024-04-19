#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void )
{
    return ;
}
PmergeMe::PmergeMe( PmergeMe const & other )
{
    (void)other;
    return ;
}
PmergeMe &   PmergeMe::operator=( PmergeMe const & other )
{
    (void)other;
    return (*this);
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
