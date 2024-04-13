#ifndef SHRUBBERYXREATIONFORM_HPP
# define SHRUBBERYXREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    public:

        ShrubberyCreationForm( std::string target );
        ShrubberyCreationForm( ShrubberyCreationForm const &other );
        ShrubberyCreationForm   &operator=( ShrubberyCreationForm const &other );
        ~ShrubberyCreationForm( void );

        void    execute(Bureaucrat const & executor) const;

    private:

        ShrubberyCreationForm( void );

        std::string _target;
};

#endif
