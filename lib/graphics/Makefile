##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

.SILENT:

all:
	make -C SFML
	make -C Ncurses

sfml:
	make -C SFML

ncurses:
	make -C Ncurses

clean:
	make clean -C SFML
	make clean -C Ncurses

fclean: clean
	make fclean -C SFML
	make fclean -C Ncurses

re:	fclean all


.PHONY: clean fclean re all 