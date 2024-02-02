NAME		=	zombie
SRC			+=	main.cpp

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(SRC)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
