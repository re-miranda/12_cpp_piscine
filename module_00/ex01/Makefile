NAME		=	crappy_phonebook
SRC		+=	main.cpp
SRC		+=	PhoneBook.class.cpp
SRC		+=	Contact.class.cpp

INCLUDE		+=	PhoneBook.class.hpp
INCLUDE		+=	Contact.class.hpp

CPPC		=	c++
CPPC_FLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98

all: $(NAME)

$(NAME):	$(SRC) $(INCLUDE)
	$(CPPC) $(CPPC_FLAGS) -o $(NAME) $(SRC)

fclean:
	rm -rf $(NAME)

re:	fclean	all

.PHONY:	all	fclean	re
