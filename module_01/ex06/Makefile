NAME	=	harlFilter
MAIN	=	main.cpp
SRC		=	Harl.cpp
INCLUDE	=	$(SRC:%.cpp=%.hpp)

CCPP	=	c++
FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
RM		=	rm -rf

$(NAME):	$(MAIN) $(SRC) $(INCLUDE)
	$(CCPP) $(FLAGS) -o $(NAME) $(MAIN) $(SRC)

all:		$(NAME)

fclean:
	$(RM) $(NAME)

re:			fclean all

.PHONY:	all fclean re
