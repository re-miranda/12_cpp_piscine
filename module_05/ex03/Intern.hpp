#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <stdexcept>
class Intern
{
    public:
        Intern( void );
        Intern( Intern const &other );
        Intern  &operator=( Intern const &other );
        ~Intern( void );

        AForm   *makeForm( std::string form_name, std::string target ) const;

    private:
		std::string _form_names_array[3];
        int         _formNameResolver( std::string name ) const;

        class InvalidFormNameException : public std::exception
        {
            public:
                virtual const char  *what( void ) const throw();
        };

};

#endif
