##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c

CC 		= 	gcc

OBJ		=	$(SRC:.c=.o)

NAME	=	myrpg

CFLAGS	=	-Wall -Werror -Wshadow -Wextra -I include/

LDFLAGS	=	-L./lib/ -lmy

RM		=	rm

MAKE 	= 	make

all:		$(NAME)

$(NAME):	$(OBJ)
			$(MAKE) -C lib/my
			$(CC) $(OBJ) $(LDFLAGS) -o $(NAME)

clean:
			$(RM) -f $(OBJ)
			$(MAKE) clean -C lib/my/

fclean:		clean
			$(RM) -f $(NAME)
			$(MAKE) fclean -C lib/my/

re:			fclean all

tests_run:  unit_tests
			./tests/unit_tests
			gcovr --exclude tests/
			gcovr --branches --exclude tests/

unit_tests:
			$(MAKE) -C lib/my
			$(MAKE) -C tests/

.PHONY:		fclean clean re all
