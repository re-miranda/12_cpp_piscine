#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
    public:

        RobotomyRequestForm( std::string target );
        RobotomyRequestForm( RobotomyRequestForm const &other );
        RobotomyRequestForm   &operator=( RobotomyRequestForm const &other );
        ~RobotomyRequestForm( void );

        void    execute(Bureaucrat const & executor) const;

    private:

        RobotomyRequestForm( void );

        std::string _target;
};

#endif
