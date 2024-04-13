#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <iostream>


int main(void) {
    Intern   A;
    AForm    *rrf;

    try
    {
        rrf = A.makeForm("not existent", "Bender");
        std::cout << *rrf << std::endl;
        delete(rrf);
    }
    catch (std::exception & e)
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    rrf = A.makeForm("robo", "Bender");
    std::cout << *rrf << std::endl;
	Bureaucrat B(1, "admin");
	B.signForm(*rrf);
	B.executeForm(*rrf);
    delete(rrf);

    rrf = A.makeForm("presidential pardon", "Bender");
    std::cout << *rrf << std::endl;
    delete(rrf);

    rrf = A.makeForm("shrubbery creation", "Bender");
    std::cout << *rrf << std::endl;
    delete(rrf);

    return (0);
}
