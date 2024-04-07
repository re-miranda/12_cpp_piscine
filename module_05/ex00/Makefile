NAME 	=	ex00
SRC		=	main.cpp Bureaucrat.cpp
INCLUDE	=	Bureaucrat.hpp

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
