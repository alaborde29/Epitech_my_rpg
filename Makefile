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
			src/animate_sprite.c		\
			src/update_sprites.c		\
			src/player_move.c			\
			src/check_button_state.c	\
			src/init_third_scene.c		\
			src/create_player.c			\
			src/game_scene.c			\
			src/pause.c					\
			src/menu.c					\
			src/starter_choice.c		\
			src/create_game.c			\
			src/init_starter.c			\
			src/check_starter_click.c	\
			src/destroy_pokemon.c		\
			src/init_fight_scene.c		\
			src/fight_scene.c			\
			src/create_fight.c			\
			src/my_itoc.c				\
			src/create_fight_string.c	\
			src/map/draw_map.c			\
			src/map/init_tile.c			\
			src/map/setup_tile_tab.c	\
			src/map/utilities.c			\

CC 		= 	gcc

OBJ		=	$(SRC:.c=.o)

NAME	=	my_rpg

CFLAGS	=	-Wall -Werror -Wshadow -Wextra -Iinclude/

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
