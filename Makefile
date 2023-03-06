##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

INCLUDE		=	-I ./lib/graphics/SFML/inc/ -I ./lib/graphics/Ncurses/inc/ -I ./lib/game/Start/inc/ -I ./lib/ -I ./inc/ 

LIB		=	-L. lib/graphics/lib_arcade_sfml.so lib/game/lib_start.so

CXXFLAGS	=	$(INCLUDE) -W -Wall -Wextra

CXX			=	g++

SRC_BASE	=	src/

SRC_FILES	=	main.cpp\
				arcade.cpp

SRC		=	$(addprefix $(SRC_BASE),$(SRC_FILES))

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade

.SILENT:

$(NAME):	$(OBJ)
			$(CXX) -o $(NAME) $(OBJ) $(INCLUDE) -ldl

compile:
	make -C lib

all:	compile		$(NAME)

clean:
	rm -f $(OBJ)
	make clean -C lib
fclean: clean
	rm -f $(NAME)
	make fclean -C lib

re:	fclean all


.PHONY: clean fclean re all 