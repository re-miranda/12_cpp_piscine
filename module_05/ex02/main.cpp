#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <iostream>


int main(void) {
    Bureaucrat Y(1, "Master");
    std::cout << "First test ------>" << std::endl;
    {
        AForm *formA = new ShrubberyCreationForm("target A");
        Bureaucrat X(138, "Renato");
        std::cout << X << std::endl;
        std::cout << *formA << std::endl;
        try
        {
            formA->beSigned(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formA << std::endl;

        try
        {
            formA->execute(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formA << std::endl;

        std::cout << "master test" << std::endl;
        formA->beSigned(Y);
        formA->execute(Y);
        std::cout << *formA << std::endl;
        delete(formA);
    }

    std::cout << "\n\n Second test ------>" << std::endl;
    {
        AForm *formA = new RobotomyRequestForm("target A");
        Bureaucrat X(136, "Renato");
        std::cout << X << std::endl;
        std::cout << *formA << std::endl;
        try
        {
            formA->beSigned(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formA << std::endl;

        try
        {
            X.executeForm(*formA);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formA << std::endl;

        try
        {
            formA->beSigned(Y);
            formA->execute(Y);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formA << std::endl;
        delete(formA);
    }

    std::cout << "\n\n Third test ------>" << std::endl;
    {
        AForm *formB = new PresidentialPardonForm("target B");
        Bureaucrat X(137, "Renato");
        std::cout << X << std::endl;
        std::cout << *formB << std::endl;
        try
        {
            formB->beSigned(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formB << std::endl;

        try
        {
            formB->execute(X);
        }
        catch (std::exception const & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formB << std::endl;

        try
        {
            formB->beSigned(Y);
            formB->execute(Y);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << *formB << std::endl;
        delete(formB);
    }
    return (0);
}
