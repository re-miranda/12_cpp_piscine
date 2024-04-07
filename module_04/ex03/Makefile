NAME = ex03
MAIN = main.cpp
SRC = AMateria.cpp Ice.cpp Cure.cpp Character.cpp MateriaSource.cpp
INCLUDE = $(SRC:%.cpp=%.hpp) ICharacter.hpp  IMateriaSource.hpp
CC = c++-13
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98
RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE) $(MAIN)
	$(CC) $(CFLAGS) -o $(NAME) $(MAIN) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
