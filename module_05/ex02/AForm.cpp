# include "AForm.hpp"

AForm::AForm( void ) : _name(), _form_is_signed(false), _signing_required_grade(1), _execution_required_grade(1) { return ; }

AForm::AForm( std::string name, int signing_req, int execution_req) : _name(name), _form_is_signed(false), _signing_required_grade(signing_req), _execution_required_grade(execution_req)
{
    if (signing_req < 1)
        throw GradeTooHighException();
    if (signing_req > 150)
        throw GradeTooLowException();
    if (execution_req < 1)
        throw GradeTooHighException();
    if (execution_req > 150)
        throw GradeTooLowException();
    return ;
}

AForm::AForm( AForm const &other ) : _name(other._name), _form_is_signed(false), _signing_required_grade(other._signing_required_grade), _execution_required_grade(other._execution_required_grade) { return ; }

AForm    &AForm::operator=( AForm const &other )
{
    this->_form_is_signed = other._form_is_signed;
    return (*this);
}

std::string AForm::getName( void ) const { return (_name); }

bool        AForm::getFormIsSigned( void ) const { return (_form_is_signed); }

int         AForm::getSigningRequirement( void ) const { return (_signing_required_grade); }

int         AForm::getExecutionRequiredGrade( void ) const { return (_execution_required_grade); }

void        AForm::beSigned( Bureaucrat const &totallyHonestGuy )
{
    if (totallyHonestGuy.getGrade() > this->getSigningRequirement())
        throw GradeTooLowException();
    else
    {
        std::cout << "Signing log of AForm" << std::endl;
        this->_form_is_signed = true;
    }
    return ;
}

void    AForm::execute(Bureaucrat const & executor) const
{
    if (this->getFormIsSigned() == false)
        throw FormNotSignedException();
    else if (executor.getGrade() > this->getExecutionRequiredGrade())
        throw GradeTooLowException();
    else
        std::cout << "Execution log of AForm" << std::endl;
    return ;
}

const char  *AForm::GradeTooHighException::what( void ) const throw()
{
    return ("Grade too high");
}

const char  *AForm::GradeTooLowException::what( void ) const throw()
{
    return ("Grade too low");
}

const char  *AForm::FormNotSignedException::what( void ) const throw()
{
    return ("Form is not signed");
}

AForm::~AForm( void ) { return ; }

std::ostream    &operator<<( std::ostream &o, AForm const &form )
{
    o << "Form: " << form.getName();
    if (form.getFormIsSigned())
        o << " is signed";
    else
        o << " is not signed";
    return (o);
}
