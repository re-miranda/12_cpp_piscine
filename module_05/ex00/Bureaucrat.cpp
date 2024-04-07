#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) {
    throw std::exception();
}

Bureaucrat::Bureaucrat( Bureaucrat const & other ) {
    this->_name = other._name;
    this->_name = other._grade;
    return ;
}

Bureaucrat  &Bureaucrat::operator=( Bureaucrat const & other ) {
    this->_name = other._name;
    this->_name = other._grade;
    return (*this);
}

Bureaucrat::Bureaucrat( int const grade, std::string name) {
    if (grade < 1)
        throw GradeTooLowExcept();
    if (grade > 150)
        throw GradeTooHighExcept();
    _grade = grade;
    _name = name;
    return ;
}

std::string Bureaucrat::getName( void ) const { return (this->_name) ; }

int Bureaucrat::getGrade( void ) const { return (this->_grade) ; }

Bureaucrat  &Bureaucrat::operator++( void ) {
    this->increment(1);
    return (*this);
}

Bureaucrat  &Bureaucrat::operator--( void ) {
    this->decrement(1);
    return (*this);
}

Bureaucrat  Bureaucrat::operator++( int ) {
    Bureaucrat before(*this);
    this->increment(1);
    return (before);
}

Bureaucrat  Bureaucrat::operator--( int ) {
    Bureaucrat before(*this);
    this->decrement(1);
    return (before);
}

void    Bureaucrat::increment( int amount ) {
    if (this->_grade - amount < 1)
        throw GradeTooLowExcept();
    this->_grade -= amount;
    return ;
}

void    Bureaucrat::decrement( int amount) {
    if (this->_grade + amount > 150)
        throw GradeTooHighExcept();
    this->_grade += amount;
    return ;
}

virtual const char *Bureaucrat::what( void ) const throw() {
    return ("Grade is too high (above 1)");
}

Bureaucrat::~Bureaucrat( void ) { return ; }

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &bureaucrat) {
    o << bureaucrat.getName();
    o << ", bureaucrat grade ";
    o << bureaucrat.getGrade();
    return (o);
}
