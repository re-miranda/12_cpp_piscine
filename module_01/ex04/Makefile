NAME	=	my_sed
MAIN	=	main.cpp

INCLUDE	+=	$(SRC:%.cpp=%.hpp)

CPPC		=	c++-13
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(MAIN) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(MAIN)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
