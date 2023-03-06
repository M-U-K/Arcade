
CXXFLAGS	=	-shared -fPIC

RM	=	rm

SRC_BASE	=	src/

SRC_FILES	=	start.cpp

SRC		=	$(addprefix $(SRC_BASE),$(SRC_FILES))

OBJ	=	$(SRC:.cpp=.o)

NAME	=	 ../lib_start.so

$(NAME):	$(OBJ)
	g++ -fPIC -o $(NAME) $(OBJ) $(CXXFLAGS)

all:	$(NAME)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re:	fclean all

tests_run:
	make -C tests/