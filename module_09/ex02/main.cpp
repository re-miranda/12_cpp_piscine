#include <algorithm>
#include <iostream>
#include <climits>
#include "PmergeMe.hpp"

bool	_validate_input( std::string const & input );

int	main(int argc, char *argv[])
{
	int	ix;
	PmergeMe		A;

	if (argc < 2) {
		std::cout << "Error: Missing arguments" << std::endl;
		return (-1);
	}
	ix = 0;
	while (++ix < argc) 
		if (_validate_input(argv[ix]))
			return (-2);

	A.load(argc, argv);
	A.run();

	return (0);
}

bool	_validate_input( std::string const & input ) {
	std::size_t	result;

	result = input.find_first_not_of("1234567890");
	if (result != std::string::npos) {
		std::cout << "Error: Invalid char in input => " << input[result] << std::endl;
		return (true);
	}
	if (std::atol(input.c_str()) > INT_MAX) {
		std::cout << "Error: Too large a number => " << input << std::endl;
		return (true);
	}
	return (false);
}
