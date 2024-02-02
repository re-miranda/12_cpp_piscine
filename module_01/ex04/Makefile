NAME	=	my_sed
MAIN	=	main.cpp
MAIN	+=	MySed.cpp

INCLUDE	+=	MySed.hpp

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(MAIN) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(MAIN)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
