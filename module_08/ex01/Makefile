NAME	=	exn
MAIN	=	main.cpp
SRC		=	Span.cpp
INCLUDE	=	$(SRC:%.cpp=%.hpp)
CXX		=	c++-13
CXXFLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
RM		=	rm -rf

all: $(NAME)

$(NAME): $(SRC) $(MAIN) $(INCLUDE)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(MAIN) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY: all fclean re
