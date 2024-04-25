#ifndef RPN_HPP
# define RPN_HPP

#include <exception>
#include <ostream>
#include <iostream>
#include <stack>
#include <stdexcept>
#include <algorithm>

class RPN {
	public:
		RPN( void );
		RPN( RPN const & other );
		~RPN( void );
		RPN &   operator=( RPN const & other );

		int		iptoi( std::string input );

	private:
		bool		_validate_input( std::string input );
		int			_read_expression( std::string input );
		int			_get_result( int const & ax, int const & bx, char const & op);
		template <typename T>
		T	_pop(std::stack<T> & stack);
		static void	_throw_if_double_digit( int const & cx );

		class	valueTooHighException : public std::exception {
			public:
				virtual const char *	what( void ) const throw();
		};
};

std::ostream	&operator<<(std::ostream & o, RPN & rpn);

#endif
