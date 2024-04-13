NAME	=	exn
MAIN	=	main.cpp
SRC		=	Serializer.cpp Data.cpp
INCLUDE	=	$(SRC:%.cpp=%.hpp)
CC		=	c++-13
C_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
RM		=	rm -rf

all: $(NAME)

$(NAME): $(SRC) $(MAIN) $(INCLUDE)
	$(CC) $(C_FLAGS) -o $(NAME) $(MAIN) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
