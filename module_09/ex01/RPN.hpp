#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <ostream>

class RPN
{
    public:
        RPN( void );
        RPN( RPN const & other );
        ~RPN( void );
        RPN &   operator=( RPN const & other );

    private:
};

std::ostream	&operator<<(std::ostream & o, RPN & exchange);

#endif
