##
## EPITECH PROJECT, 2020
## project_name
## File description:
## Makefile
##

CC	= 	g++

SRC	=	main.cpp\
		scene.cpp\
		text.cpp\
		window.cpp\
		time.cpp\
		rect.cpp\

OBJ	=	$(SRC:.cpp=.o)

NAME 	=	test

CFLAGS	=	-lncurses -Wall -Wextra -g 

TEST	=	./tests/

TEST_OBJ =	$(TEST:.cpp=.o)

RED=\033[1;31m
GREEN=\033[1;32m
NC=\033[0m

.SILENT:

all: $(NAME)

%.o : %.cpp
	gcc -o $@ -c $(CFLAGS) $^

$(NAME): $(OBJ)
	$(CC) -o $@ $(OBJ) $(CFLAGS)

test_run: CFLAGS += --coverage
test_run: LDFLAGS += -lcriterion --coverage
test_run: clean $(TEST_OBJ)
	$(CC) -o unit_tests $(TEST_OBJ) $(LDFLAGS)
	./unit_tests

clean:
	rm -f $(OBJ)
	printf "$(RED)[-]$(NC).o files deleted\n"
	rm -f *.gcno
	rm -f *.gcda

fclean: clean
	rm -f $(NAME)
	printf "$(RED)[-]$(NC)Executable $(NAME) deleted\n"
	rm -f *.gcno
	rm -f ./tests/*.gcno
	rm -f *.gcda
	rm -f ./tests/*.gcda
	rm -f ./tests/*.o
	rm -f unit_tests

re: fclean all
