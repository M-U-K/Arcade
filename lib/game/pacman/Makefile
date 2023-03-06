##
## EPITECH PROJECT, 2021
## B-OOP-400-LYN-4-1-arcade-nicolas1.peter
## File description:
## Makefile
##

INCLUDE		=	-I ./../../graphics/SFML/inc/ -I ./lib/

LIB		=	-L. ./../../graphics/lib_arcade_sfml.so

CXXFLAGS	=	$(INCLUDE) -W -Wall -Wextra

CXX			=	g++

SRC_BASE	=	./

SRC_FILES	=	main.cpp

SRC		=	$(addprefix $(SRC_BASE),$(SRC_FILES))

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade

.SILENT:

$(NAME):	$(OBJ)
			$(CXX) -o $(NAME) $(OBJ) $(INCLUDE) $(LIB)


all:	$(NAME)

clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)

re:	fclean all


.PHONY: clean fclean re all 