
CXXFLAGS	=	-shared -fPIC

LDFLAGS		=	-lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

RM	=	rm

SRC_BASE	=	src/

SRC_FILES	=	rect.cpp\
				scene.cpp\
				text.cpp\
				time.cpp\
				window.cpp

SRC		=	$(addprefix $(SRC_BASE),$(SRC_FILES))

OBJ	=	$(SRC:.cpp=.o)

NAME	=	 ../arcade_sfml.so

$(NAME):	$(OBJ)
	g++ -fPIC -o $(NAME) $(OBJ) $(CXXFLAGS) $(LDFLAGS)

all:	$(NAME)

clean:
	$(RM) -f $(OBJ)

fclean: clean
	$(RM) -f $(NAME)

re:	fclean all

tests_run:
	make -C tests/