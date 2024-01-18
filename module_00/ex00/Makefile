NAME	=	megaphone
SRC 	=	Megaphone.cpp
SRC 	+=	MegaString.cpp
CC		=	c++
FLAGS	=	-std=c++98 -pedantic -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all fclean re
