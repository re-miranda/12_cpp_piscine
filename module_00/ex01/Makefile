NAME		=	crappy_phonebook
SRC		+=	main.cpp
SRC		+=	PhoneBook.cpp
SRC		+=	Contact.cpp

INCLUDE		+=	PhoneBook.hpp
INCLUDE		+=	Contact.hpp

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(SRC) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
