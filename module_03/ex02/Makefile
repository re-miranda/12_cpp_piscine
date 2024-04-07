NAME = ex02
SRC = main.cpp ClapTrap.cpp FragTrap.cpp
INCLUDE = ClapTrap.hpp FragTrap.hpp

CC = g++-13
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)
fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
