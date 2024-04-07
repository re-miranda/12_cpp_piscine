NAME 	=	ex01
SRC		=	main.cpp Bureaucrat.cpp Form.cpp
INCLUDE	=	Bureaucrat.hpp Form.hpp

CC		=	c++-13
CFLAGS	=	-Wall -Werror -Wextra -Wpedantic
RM 		=	rm -rf

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) $(INCLUDE)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY:	all fclean re
