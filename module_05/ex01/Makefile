NAME 	=	ex01
MAIN	=	main.cpp
SRC		=	Bureaucrat.cpp Form.cpp
INCLUDE	=	$(SRC:%.cpp=%.hpp)

CC		=	c++-13
CFLAGS	=	-Wall -Werror -Wextra -Wpedantic -std=c++98
RM 		=	rm -rf

all: $(NAME)

$(NAME): $(MAIN) $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(MAIN) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY:	all fclean re
