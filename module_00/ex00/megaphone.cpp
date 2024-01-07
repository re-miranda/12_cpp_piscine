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
	std::string	objectfied_arg;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (*++argv != NULL)
		{
			cstring_toupper(*argv);
			objectfied_arg = trim_beginning_space(*argv);
			std::cout << objectfied_arg;
			if (*(argv + 1) != NULL &&
				(objectfied_arg.empty() || objectfied_arg.back() != ' '))
				std::cout << " ";
		}
		std::cout << std::endl;
	}
	return (0);
}

