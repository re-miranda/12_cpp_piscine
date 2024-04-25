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
int	RPN::iptoi( std::string input )
{
	int	result;

	if (this->_validate_input(input))
		return (-1);
	this->_read_expression(input);
	result = this->_get_result();
	std::cout << result << std::endl;
	return (result);
}
bool	RPN::_validate_input( std::string input )
{
	std::size_t	result;

	result = input.find_first_not_of(" +-/*1234567890");
	if (result != std::string::npos)
	{
		std::cout << "Error: invalid char in input => " << input[result] << std::endl;
		return (true);
	}
	try
	{
		std::for_each(input.begin(), input.end(), &(RPN::_throw_if_double_digit));
	}
	catch (std::exception const & e)
	{
		std::cout << "Caught error: " << e.what() << std::endl;
		return (true);
	}
	return (false);
}
void	RPN::_throw_if_double_digit( int const & cx )
{
	static	int	last_digit;

	if (last_digit > '0')
		if (std::isdigit(cx))
			throw valueTooHighException();
	if (std::isdigit(cx))
		last_digit = cx;
	else
		last_digit = 0;
	return ;
}
void	RPN::_read_expression( std::string input )
{
	std::cout << "bebog reading expression: " << input << std::endl;
	return ;
}
int	RPN::_get_result( void )
{
	std::cout << "bebog getting result!" << std::endl;
	return (42);
}
RPN &   RPN::operator=( RPN const & other )
{
	(void)other;
	return (*this);
}
const char *	RPN::valueTooHighException::what( void ) const throw()
{
	return ("Max value is 9.");
}
RPN::~RPN( void )
{
	return ;
}
std::ostream	&operator<<(std::ostream & o, RPN & rpn)
{
	(void)rpn;
	return (o);
}
