#include <iostream>
#include <ostream>
#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	RPN A;

	if (argc != 2)
	{
		std::cout << "Error: bad arguments" << std::endl;
		return (-1);
	}
	A.iptoi(argv[1]);
	return (0);
}
