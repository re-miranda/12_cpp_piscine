#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{

    public:

        Form( Form const &other);
        Form( std::string name, int signing_req, int execution_req );
        Form    &operator=( Form const &other );
        ~Form( void );

        std::string getName( void ) const;
        bool        getFormIsSigned( void ) const;
        int         getSigningRequirement( void ) const;
        int         getExecutionRequiredGrade( void ) const;

        void        beSigned(Bureaucrat const &totallyHonestGuy);

    private:
        Form( void );

        std::string const   _name;
        bool                _form_is_signed;
        int const           _signing_required_grade;
        int const           _execution_required_grade;

        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char  *what( void ) const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char  *what( void ) const throw();
        };

};

std::ostream    &operator<<(std::ostream &o, Form const &form);

#endif
