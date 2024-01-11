#include <iostream>
#include <ctype.h>

void	cstring_toupper(char	*cstring)
{
	while (*cstring)
	{
		*cstring = toupper(*cstring);
		cstring++;
	}
}

char	*trim_beginning_space(char *cstring)
{
	while (*cstring && isspace(*cstring))
		cstring++;
	return (cstring);
}

int	main(int argc, char **argv)
{
	std::string	ClassyString;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*++argv != NULL)
		{
			cstring_toupper(*argv);
			ClassyString = trim_beginning_space(*argv);
			std::cout << ClassyString;
			if (*(argv + 1) != NULL &&
				(ClassyString.empty() || ClassyString.back() != ' '))
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

