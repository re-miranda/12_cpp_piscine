NAME	=	btc
MAIN	=	main.cpp
SRC		=	BitcoinExchange.cpp
OBJ		=	$(SRC:%.cpp=%.opp)
INCLUDE	=	$(SRC:%.cpp=%.hpp)

CXX			=	c++-13
CXXFLAGS	=	-Wall -Wextra -Werror -Wpedantic -std=c++98 -Wl,-keep_dwarf_unwind
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
