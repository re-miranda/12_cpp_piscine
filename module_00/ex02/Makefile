NAME	=	dream_job
SRC		+=	Account.cpp
SRC		+=	tests.cpp

CC	=	c++
FLAGS	=	-std=c++98 -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(SRC)
	$(CC) $(FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean all

.PHONY:	all fclean re
