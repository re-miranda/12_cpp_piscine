# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) : _name()
{
    throw std::exception();
}

Bureaucrat::Bureaucrat( Bureaucrat const & other ) : _name(other._name)
{
    this->_grade = other._grade;
    return ;
}

Bureaucrat  &Bureaucrat::operator=( Bureaucrat const & other )
{
    this->_grade = other._grade;
    return (*this);
}

Bureaucrat::Bureaucrat( int const grade, std::string name) : _name(name)
{
    if (grade < 1)
        throw GradeTooHighExcept();
    if (grade > 150)
        throw GradeTooLowExcept();
    _grade = grade;
    return ;
}

std::string Bureaucrat::getName( void ) const { return (this->_name) ; }

int Bureaucrat::getGrade( void ) const { return (this->_grade) ; }

Bureaucrat  &Bureaucrat::operator++( void )
{
    this->increment(1);
    return (*this);
}

Bureaucrat  &Bureaucrat::operator--( void )
{
    this->decrement(1);
    return (*this);
}

Bureaucrat  Bureaucrat::operator++( int )
{
    Bureaucrat before(*this);
    this->increment(1);
    return (before);
}

Bureaucrat  Bureaucrat::operator--( int )
{
    Bureaucrat before(*this);
    this->decrement(1);
    return (before);
}

void    Bureaucrat::increment( int amount )
{
    long int    lresult;

    lresult = (long int)this->_grade - amount;
    if (lresult < 1)
        throw GradeTooHighExcept();
    if (lresult > 150)
        throw GradeTooLowExcept();
    this->_grade -= amount;
    return ;
}

void    Bureaucrat::decrement( int amount)
{
    long int    lresult;

    lresult = (long int)this->_grade + amount;
    if (lresult < 1)
        throw GradeTooHighExcept();
    if (lresult > 150)
        throw GradeTooLowExcept();
    this->_grade += amount;
    return ;
}

const char *Bureaucrat::GradeTooHighExcept::what( void ) const throw()
{
    return ("Grade is too high (above 1)");
}

const char *Bureaucrat::GradeTooLowExcept::what( void ) const throw()
{
    return ("Grade is too low (below 150)");
}

void   Bureaucrat::signForm( AForm &form ) const
{
    try
    {
        form.beSigned(*this);
        std::cout << this->_name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

void   Bureaucrat::executeForm( AForm const &form ) const
{
    try
    {
        form.execute(*this);
        std::cout << this->_name << " exacuted " << form.getName() << std::endl;
    }
    catch (std::exception const &e)
    {
        std::cout << this->_name << " couldn't execute sign " << form.getName() << " because " << e.what() << std::endl;
    }
    return ;
}

Bureaucrat::~Bureaucrat( void ) { return ; }

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &bureaucrat)
{
    o << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade();
    return (o);
}
