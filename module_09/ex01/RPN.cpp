#include "RPN.hpp"

RPN::RPN( void ) {
	return ;
}
RPN::RPN( RPN const & other ) {
	(void)other;
	return ;
}
int	RPN::iptoi( std::string input ) {
	int	result;

	if (this->_validate_input(input))
		return (-1);
	result = this->_read_expression(input);
	std::cout << result << std::endl;
	return (result);
}
bool	RPN::_validate_input( std::string input ) {
	std::size_t	result;

	result = input.find_first_not_of(" +-/*1234567890");
	if (result != std::string::npos) {
		std::cout << "Error: invalid char in input => " << input[result] << std::endl;
		return (true);
	}
	try {
		std::for_each(input.begin(), input.end(), &(RPN::_throw_if_double_digit));
	}
	catch (std::exception const & e) {
		std::cout << "Caught error: " << e.what() << std::endl;
		return (true);
	}
	return (false);
}
void	RPN::_throw_if_double_digit( int const & cx ) {
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
int	RPN::_read_expression( std::string input ) {
	std::cout << "Reading expression: " << input << std::endl;
	std::string::iterator	it;
	std::string::iterator	ite;
	std::stack<int>			stack;

	it = input.begin();
	ite = input.end();
	while (it < ite) {
		if (std::isdigit(*it))
			stack.push(*it - 48);
		else if (!std::isspace(*it))
			stack.push(this->_get_result(this->_pop(stack), this->_pop(stack), *it));
		++it;
	}
	return (stack.top());
}
template <typename T>
T	RPN::_pop(std::stack<T> & stack)
{
	T	value;

	value = stack.top();
	stack.pop();
	return (value);
}
int	RPN::_get_result( int const & bx, int const & ax, char const & op) {
	switch (op) {
		case '+':
			return (ax + bx);
		case '-':
			return (ax - bx);
		case '/':
			return (ax / bx);
		case '*':
			return (ax * bx);
	};
	return (ax);
}
RPN &	RPN::operator=( RPN const & other ) {
	(void)other;
	return (*this);
}
const char *	RPN::valueTooHighException::what( void ) const throw() {
	return ("Max value is 9.");
}
RPN::~RPN( void ) {
	return ;
}
std::ostream	&operator<<(std::ostream & o, RPN & rpn) {
	(void)rpn;
	return (o);
}
