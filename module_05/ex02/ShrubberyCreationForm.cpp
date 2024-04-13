#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ) : AForm( "ShrubberyCreationForm", 145, 137), _target("undefined")

{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) : AForm( "ShrubberyCreationForm", 145, 137), _target(target)
{
    return ;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &other) : AForm( other ), _target(other._target)
{
    return ;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=( ShrubberyCreationForm const &other)
{
    this->AForm::operator=(other);
    this->_target = other._target;
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::ofstream	outfile;

    this->AForm::execute(executor);
	outfile.open((this->_target + "_shrubbry").c_str());
	if (outfile.fail()) {
		std::cout << "Failed to create temporary file" << std::endl;
		return ;
	}
    outfile << "ASCII TREE" << std::endl;
	outfile.close();
    std::cout << "File created" << std::endl;
    return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm( void )
{
    return ;
}
