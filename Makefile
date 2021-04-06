##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c					\
			src/create_framebuffer.c	\
			src/start_game.c			\
			src/malloc_scene.c			\
			src/create_scene.c			\
			src/init_first_scene.c		\
			src/init_all_scene.c		\
			src/draw_scene.c			\
			src/init_object.c			\
			src/init_button.c			\
			src/destroy_all.c			\
			src/init_text.c				\
			src/callback.c				\
			src/button_is_clicked.c		\
			src/check_event.c			\
			src/check_buttons.c			\
			src/init_second_scene.c		\

CC 		= 	gcc

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-Wall -Werror -Wshadow -Wextra -I include/

LDFLAGS	=	-L./lib/ -lmy -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

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
