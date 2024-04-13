NAME 	=	ex03
MAIN	=	main.cpp
SRC		=	Bureaucrat.cpp AForm.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp
INCLUDE	=	$(SRC:%.cpp=%.hpp)

CC		=	c++-13
CFLAGS	=	-Wall -Werror -Wextra -Wpedantic -std=c++98
RM 		=	rm -rf

all: $(NAME)

$(NAME): $(SRC) $(INCLUDE) $(MAIN)
	$(CC) $(CFLAGS) -o $(NAME) $(MAIN) $(SRC)

fclean:
	$(RM) $(NAME)

re: fclean all

.PHONY:	all fclean re
