NAME = ex00
SRC = main.cpp ClapTrap.cpp
INCLUDE = ClapTrap.hpp

CC = g++-13
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
