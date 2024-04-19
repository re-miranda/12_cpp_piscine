#include <iostream>
#include <vector>
#include <stdexcept>
#include "easyfind.hpp"

template <typename T>
void    printT(T const & value)
{
    std::cout << value << " ";
    return ;
}

int	main(void)
{
	std::vector<int>	int_vector(5, 42);
	int_vector.push_back(24);
	
    std::cout << "int vector: <<<<<<" << std::endl;
    std::vector<int>::const_iterator	it = int_vector.begin();
	std::vector<int>::const_iterator	ite = int_vector.end();
    std::for_each(it, ite, printT<int>);
    std::cout << std::endl;

    std::cout << "find tests: <<<<<<" << std::endl;
    std::cout << "find (24):";
    try
    {
        std::cout << *easyfind(int_vector, 24) << std::endl;
    }
    catch ( std::exception const & e )
    {
        std::cout << "caught error:" << e.what() << std::endl;
    }

    std::cout << "find (42):";
    try
    {
        std::cout << *easyfind(int_vector, 42) << std::endl;
    }
    catch ( std::exception const & e )
    {
        std::cout << "caught error:" << e.what() << std::endl;
    }

    std::cout << "find (4):";
    try
    {
        std::cout << *easyfind(int_vector, 4) << std::endl;
    } catch (const std::exception &e) {
        std::cout << e.what() << std::endl;
    }

	return (0);
}
