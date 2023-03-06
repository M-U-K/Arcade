##
## EPITECH PROJECT, 2021
## Untitled (Workspace)
## File description:
## Makefile
##

.SILENT:

all:
	make -C graphics
	make -C game

graphics:
	make -C graphics

game:
	make -C game

clean:
	make clean -C graphics
	make clean -C game

fclean: clean
	make fclean -C graphics
	make fclean -C game

re:	fclean all


.PHONY: clean fclean re all 