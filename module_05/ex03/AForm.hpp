#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{

    public:

        AForm    &operator=( AForm const &other );
        virtual ~AForm( void );

        std::string getName( void ) const;
        bool        getFormIsSigned( void ) const;
        int         getSigningRequirement( void ) const;
        int         getExecutionRequiredGrade( void ) const;

        void            beSigned(Bureaucrat const &totallyHonestGuy);
        virtual void    execute(Bureaucrat const & executor) const;

    protected:

        AForm( void );
        AForm( AForm const &other);
        AForm( std::string name, int signing_req, int execution_req );

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
        class FormNotSignedException: public std::exception
        {
            public:
                virtual const char  *what( void ) const throw();
        };

    private:

        std::string const   _name;
        bool                _form_is_signed;
        int const           _signing_required_grade;
        int const           _execution_required_grade;

};

std::ostream    &operator<<(std::ostream &o, AForm const &form);

#endif
