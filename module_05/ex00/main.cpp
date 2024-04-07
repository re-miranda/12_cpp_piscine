#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {
    try
    {
        Bureaucrat A(150, "");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat A(0, "Test name");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    try
    {
        Bureaucrat A(151, "Test name");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }
    
    try
    {
        Bureaucrat X(1, "Renato");
        std::cout << X << std::endl;
        X.increment(1);
        std::cout << "hello";
        std::cout << X << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    return (0);
}
