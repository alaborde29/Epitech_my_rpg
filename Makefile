##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## Makefile
##

SRC		=	src/main.c						\
			src/create_framebuffer.c		\
			src/start_game.c				\
			src/malloc_scene.c				\
			src/create_scene.c				\
			src/init_first_scene.c			\
			src/init_all_scene.c			\
			src/draw_scene.c				\
			src/init_object.c				\
			src/init_button.c				\
			src/destroy_all.c				\
			src/init_text.c					\
			src/callback.c					\
			src/button_is_clicked.c			\
			src/check_event.c				\
			src/check_buttons.c				\
			src/init_second_scene.c			\
			src/animate_sprite.c			\
			src/update_sprites.c			\
			src/player_move.c				\
			src/check_button_state.c		\
			src/init_third_scene.c			\
			src/create_player.c				\
			src/game_scene.c				\
			src/pause.c						\
			src/menu.c						\
			src/starter_choice.c			\
			src/create_game.c				\
			src/init_starter.c				\
			src/check_starter_click.c		\
			src/destroy_pokemon.c			\
			src/init_fight_scene.c			\
			src/fight_scene.c				\
			src/create_fight.c				\
			src/my_itoc.c					\
			src/create_fight_string.c		\
			src/init_fourth_scene.c 		\
			src/inventory.c 				\
			src/set_fight.c					\
			src/fight_callback.c			\
			src/create_text.c				\
			src/make_our_turn.c				\
			src/set_text.c					\
			src/map/draw_map.c				\
			src/map/init_tile_list.c		\
			src/map/utilities.c				\
			src/init_htp_scene.c			\
			src/htp_scene.c					\
			src/callback2.c					\
			src/create_attack.c				\
			src/make_opponent_turn.c		\
			src/utils_fight.c				\
			src/make_turn.c					\
			src/init_end_turn.c				\
			src/create_all_pokemon.c		\
			src/pick_random_pokemon.c		\
			src/destroy_fight.c				\
			src/map/init_tile_list_above.c	\
			src/map/draw_map_above.c		\
			src/pokemon/init_diglett.c		\
			src/pokemon/init_dragonite.c	\
			src/pokemon/init_gloom.c		\
			src/pokemon/init_moltres.c		\
			src/pokemon/init_onix.c			\
			src/pokemon/init_pidgey.c		\
			src/pokemon/init_pikachu.c		\
			src/pokemon/init_aerodactyl.c	\
			src/pokemon/init_tauros.c		\
			src/pokemon/init_exeggutor.c	\
			src/pokemon/init_golbat.c		\
			src/pokemon/init_jynx.c			\
			src/pokemon/init_kabutops.c		\
			src/pokemon/init_machop.c		\
			src/pokemon/init_meowth.c		\
			src/pokemon/init_mewtwo.c		\
			src/pokemon/init_umbreon.c		\
			src/pokemon/init_zapdos.c		\
			src/pokemon/init_rapidash.c		\
			src/pokemon/init_ninetales.c	\
			src/pokemon/init_gengar.c		\
			src/pokemon/init_electabuzz.c	\
			src/pokemon/init_golduck.c		\
			src/pokemon/init_houndoom.c		\
			src/pokemon/init_feraligatr.c	\
			src/pokemon/init_growlithe.c	\
			src/pokemon/init_primeape.c		\

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
