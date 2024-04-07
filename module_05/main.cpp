#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main(void) {
    std::cout << "First test ------>" << std::endl;
    {
        Form formA("test form", 1, 1);
        Bureaucrat X(1, "Renato");
        std::cout << X << std::endl;
        std::cout << formA << std::endl;
        try
        {
            formA.beSigned(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << formA << std::endl;
    }
    std::cout << "Second test ------>" << std::endl;
    {
        Form formA("test form", 1, 1);
        Bureaucrat X(2, "Renato");
        std::cout << X << std::endl;
        std::cout << formA << std::endl;
        try
        {
            formA.beSigned(X);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << formA << std::endl;
    }
    std::cout << "Third test ------>" << std::endl;
    {
        Form formA("test form", 1, 1);
        Bureaucrat X(1, "Renato");
        std::cout << X << std::endl;
        std::cout << formA << std::endl;
        try
        {
            X.signForm(formA);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << formA << std::endl;
    }
    std::cout << "Fourth test ------>" << std::endl;
    {
        Form formA("test form", 1, 1);
        Bureaucrat X(2, "Renato");
        std::cout << X << std::endl;
        std::cout << formA << std::endl;
        try
        {
            X.signForm(formA);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << formA << std::endl;
    }

    return (0);
}
