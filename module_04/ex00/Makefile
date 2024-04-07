NAME = ex00
SRC	= main.cpp Animal.cpp Dog.cpp Cat.cpp WrongCat.cpp WrongAnimal.cpp
INCLUDE = Animal.hpp Dog.hpp Cat.hpp WrongCat.hpp WrongAnimal.hpp

CC = c++-13
CFALGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all 

.PHONY: all fclean re
