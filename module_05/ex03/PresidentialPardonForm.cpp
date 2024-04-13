#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ) : AForm( "PresidentialPardonForm", 25, 5), _target("undefined")

{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ) : AForm( "PresidentialPardonForm", 25, 5), _target(target)
{
    return ;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &other) : AForm( other ), _target(other._target)
{
    return ;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=( PresidentialPardonForm const &other)
{
    this->AForm::operator=(other);
    this->_target = other._target;
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    this->AForm::execute(executor);
    std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    return ;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
    return ;
}
