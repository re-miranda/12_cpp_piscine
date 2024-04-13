# include "Form.hpp"

Form::Form( void ) : _name(), _form_is_signed(false), _signing_required_grade(1), _execution_required_grade(1) { return ; }

Form::Form( std::string name, int signing_req, int execution_req) : _name(name), _form_is_signed(false), _signing_required_grade(signing_req), _execution_required_grade(execution_req)
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

Form::Form( Form const &other ) : _name(other._name), _form_is_signed(false), _signing_required_grade(other._signing_required_grade), _execution_required_grade(other._execution_required_grade) { return ; }

Form    &Form::operator=( Form const &other )
{
    this->_form_is_signed = other._form_is_signed;
    return (*this);
}

std::string Form::getName( void ) const { return (_name); }

bool        Form::getFormIsSigned( void ) const { return (_form_is_signed); }

int         Form::getSigningRequirement( void ) const { return (_signing_required_grade); }

int         Form::getExecutionRequiredGrade( void ) const { return (_execution_required_grade); }

void        Form::beSigned( Bureaucrat const &totallyHonestGuy )
{
    if (totallyHonestGuy.getGrade() > this->_signing_required_grade)
        throw GradeTooLowException();
    this->_form_is_signed = true;
    return ;
}

const char  *Form::GradeTooHighException::what( void ) const throw()
{
    return ("Grade too high");
}

const char  *Form::GradeTooLowException::what( void ) const throw()
{
    return ("Grade too low");
}

Form::~Form( void ) { return ; }

std::ostream    &operator<<( std::ostream &o, Form const &form )
{
    o << "Form: " << form.getName();
    if (form.getFormIsSigned())
        o << " is signed";
    else
        o << " is not signed";
    return (o);
}
