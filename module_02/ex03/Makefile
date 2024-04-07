NAME	=	ex03
SRC		=	main.cpp
SRC 	+=	Fixed.cpp Point.cpp
INCLUDE	+=	Fixed.hpp Point.hpp

CC		=	c++-13
FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
