#include <iostream>
#include "MegaString.hpp"

int	main(int argc, char **argv)
{
    MegaString  formatted_output;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
    {
		while (*++argv != NULL)
            formatted_output.print_loud(*argv);
        std::cout << std::endl;
    }
	return (0);
}

