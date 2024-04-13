#include "Intern.hpp"

Intern::Intern( void )
{
    this->_form_names_array[0] = "shrubbery creation";
    this->_form_names_array[1] = "robotomy request";
    this->_form_names_array[2] = "presidential pardon";
    return ;
}

Intern::Intern( Intern const &other )
{
    this->_form_names_array[0] = other._form_names_array[0];
    this->_form_names_array[1] = other._form_names_array[1];
    this->_form_names_array[2] = other._form_names_array[2];
    return ;
}

Intern  &Intern::operator=( Intern const &other )
{
    this->_form_names_array[0] = other._form_names_array[0];
    this->_form_names_array[1] = other._form_names_array[1];
    this->_form_names_array[2] = other._form_names_array[2];
    return (*this);
}

AForm   *Intern::makeForm( std::string form_name, std::string target ) const
{
    AForm   *form_ptr;

    form_ptr = NULL;
    switch(this->_formNameResolver(form_name))
    {
        case 0:
            form_ptr = new ShrubberyCreationForm(target);
            break;
        case 1:
            form_ptr = new RobotomyRequestForm(target);
            break;
        case 2:
            form_ptr = new PresidentialPardonForm(target);
            break;
    }
    if (form_ptr != NULL)
        std::cout << "Intern creates " << form_ptr->getName() << std::endl;
    else
    {
        std::cout << "Intern ERROR (no forms with name were fond)" << std::endl;
        throw InvalidFormNameException();
    }
    return (form_ptr);
}

int Intern::_formNameResolver( std::string name ) const
{
    for (int i = 0; i < 3; i++)
    {
        if (this->_form_names_array[i].find(name, 0) != std::string::npos)
            return (i);
    }
    return (-1);
}

const char  *Intern::InvalidFormNameException::what( void ) const throw()
{
    return ("Name did not match any form");
}

Intern::~Intern( void )
{
    return ;
}
