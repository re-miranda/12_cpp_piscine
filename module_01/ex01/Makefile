NAME		=	zombie
SRC		+=	main.cpp
SRC		+=	Zombie.cpp
SRC		+=	zombieHorde.cpp

INCLUDE	+=	Zombie.hpp

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(SRC) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
