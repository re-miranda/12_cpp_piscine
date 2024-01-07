NAME	=	weapon
SRC		+=	Weapon.class.cpp
SRC		+=	HumanA.class.cpp
SRC		+=	HumanB.class.cpp

INCLUDE	+=	$(SRC:%.cpp=%.hpp)

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(SRC) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) main.cpp $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
