NAME = ex02
SRC	= main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
INCLUDE = Animal.hpp Dog.hpp Cat.hpp Brain.hpp

CC = c++-13
CFLAGS = -Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE)
	$(CC) $(CFLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re: fclean all

.PHONY: all fclean re
