#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ) : AForm( "RobotomyRequestForm", 72, 45), _target("undefined")

{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ) : AForm( "RobotomyRequestForm", 72, 45), _target(target)
{
    return ;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &other) : AForm( other ), _target(other._target)
{
    return ;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=( RobotomyRequestForm const &other)
{
    this->AForm::operator=(other);
    this->_target = other._target;
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    this->AForm::execute(executor);
    srand(time(NULL));

    std::cout << "<some drilling noises> ";
    if (rand() % 2 == 0)
        std::cout << this->_target << " has been robotomized" << std::endl;
    else
        std::cout << this->_target << " robotomiztion failed" << std::endl;
    return ;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
    return ;
}
