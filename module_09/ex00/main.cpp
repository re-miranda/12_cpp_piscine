#include <exception>
#include <iostream>
#include <fstream>
#include <string>
#include <utility>
#include "BitcoinExchange.hpp"

bool	_assert_data_is_valid( std::basic_ifstream<char> & file_input );

int	main(int argc, char *argv[])
{
	std::basic_ifstream<char>	file_input;
	BitcoinExchange				A;
	std::string					line;

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
	if (!_assert_data_is_valid(file_input))
	{
		std::cout << "Error: input file not formatted" << std::endl;
		return (-2);
	}

	try {
		A.open("./data.csv");
	} catch (std::exception const & e) {
		std::cout <<  "Caught Error: " << e.what() << std::endl;
		file_input.close();
		return (-3);
	}
	while (std::getline(file_input, line))
		A.getValue(line);

	file_input.close();
	return (0);
}

bool	_assert_data_is_valid( std::basic_ifstream<char> & file_input )
{
	std::string	line;

	std::getline(file_input, line);
	if (line.compare("date | value"))
		return (false);
	return (true);
}
