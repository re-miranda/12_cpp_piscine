#include "Bureaucrat.hpp"
#include <iostream>

int main(void) {
    std::cout << "\n\n>>>>> Bureaucrat A test >>>>>>\n";
    try
    {
        Bureaucrat A(150, "");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    std::cout << "\n\n>>>>> Bureaucrat B test >>>>>>\n";
    try
    {
        Bureaucrat B(0, "B_name");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    std::cout << "\n\n>>>>> Bureaucrat C test >>>>>>\n";
    try
    {
        Bureaucrat C(151, "C_name");
    }
    catch ( std::exception & e )
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }
    
    std::cout << "\n\n>>>>> Bureaucrat X test >>>>>>\n";
    try
    {
        Bureaucrat X(1,  "X_name");
        std::cout << X << std::endl;
        try
        {
            X.increment(1);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << X << std::endl;
        try
        {
            X.increment(0);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << X << std::endl;
        try
        {
            X.increment(-1);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << X << std::endl;
        try
        {
            X.increment(-180);
        }
        catch (std::exception & e)
        {
            std::cout << "Cought error! " << e.what() << std::endl;
        }
        std::cout << X << std::endl;
    }
    catch (std::exception & e)
    {
        std::cout << "Cought error! " << e.what() << std::endl;
    }

    std::cout << "\n\n>>>>> return (0); >>>>>>\n";
    return (0);
}
