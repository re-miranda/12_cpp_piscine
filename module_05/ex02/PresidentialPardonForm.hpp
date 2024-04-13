#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    public:

        PresidentialPardonForm( std::string target );
        PresidentialPardonForm( PresidentialPardonForm const &other );
        PresidentialPardonForm   &operator=( PresidentialPardonForm const &other );
        ~PresidentialPardonForm( void );

        void    execute(Bureaucrat const & executor) const;

    private:

        PresidentialPardonForm( void );

        std::string _target;
};

#endif
