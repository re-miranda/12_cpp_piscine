#include <exception>
#include <iostream>
#include <fstream>
#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	std::basic_ifstream<char>	file_input;
	BitcoinExchange				A;

	if (argc == 1)
	{
		std::cout << "Error: input file not provided" << std::endl;
		return (-1);
	}
	file_input.open(argv[1], std::ifstream::in);
	if (!file_input.good())
	{
		std::cout << "Error: could not open input file" << std::endl;
		return (-2);
	}

	try {
		A.open("./data.csv");
	} catch (std::exception const & e) {
		std::cout <<  "Caught Error: " << e.what() << std::endl;
		file_input.close();
		return (-3);
	}
	A.printData();

	file_input.close();
	return (0);
}
