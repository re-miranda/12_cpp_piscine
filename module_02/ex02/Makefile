NAME	=	ex02
SRC		=	main.cpp
SRC 	+=	Fixed.cpp
INCLUDE	+=	Fixed.hpp

CC		=	c++-13
FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
