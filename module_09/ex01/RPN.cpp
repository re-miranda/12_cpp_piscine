#include "RPN.hpp"

RPN::RPN( void )
{
    return ;
}
RPN::RPN( RPN const & other )
{
    (void)other;
    return ;
}
RPN &   RPN::operator=( RPN const & other )
{
    (void)other;
    return (*this);
}
RPN::~RPN( void )
{
    return ;
}
std::ostream	&operator<<(std::ostream & o, RPN & exchange)
{
    (void)exchange;
    return (o);
}
