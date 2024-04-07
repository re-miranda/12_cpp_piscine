NAME = ex03
SRC = main.cpp ClapTrap.cpp FragTrap.cpp ScavTrap.cpp DiamondTrap.cpp
INCLUDE = ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

CC = g++-13
CFLAGS = -Werror -Wall -Wextra -Wpedantic -std=c++98 -Wshadow -Wno-shadow

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
