#include <exception>
#include <iostream>
#include "Array.hpp"

int main( void )
{
	Array<char>  A;
	std::cout << A << std::endl;
	
	Array<char>  B(2);
	std::cout << B << std::endl;
	B[0] = 'A';
	try
	{
		std::cout << B << std::endl;
		std::cout << B[0] << std::endl;
		std::cout << B[1] << std::endl;
		std::cout << B[2] << std::endl;
	}
	catch (std::exception const & e)
	{
		std::cout << "Caught error!" << std::endl;
	}
	
	return (0);
}
