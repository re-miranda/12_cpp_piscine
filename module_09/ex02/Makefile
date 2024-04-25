NAME	=	PmregeMe
MAIN	=	main.cpp
SRC		=	PmergeMe.cpp
OBJ		=	$(SRC:%.cpp=%.opp)
INCLUDE	=	$(SRC:%.cpp=%.hpp)

CXX			=	c++-13
CXXFLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98
OXXFLAGS	=	-c $(CXXFLAGS)
RM			=	rm -rf

all: $(NAME)

$(NAME): $(MAIN) $(OBJ) $(INCLUDE)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(MAIN) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:			fclean all

%.opp:	%.cpp
	$(CXX) $(OXXFLAGS) -o $@ $<

.PHONY: all fclean re
