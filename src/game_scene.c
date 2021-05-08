/*
** EPITECH PROJECT, 2021
** game_scene.c
** File description:
** game scene
*/

#include "rpg.h"

void reset_fight(game_t *game)
{
    game->fighting = false;
    game->fight->win = false;
    game->fight->loose = false;
    game->fight->player_turn = true;
    game->fight->attack_choose = false;
    game->fight->attack->first = false;
    game->fight->attack->second = false;
    sfClock_destroy(game->fight->win_clock);
    game->fight->win_clock = NULL;
    game->fight->opponent_pokemon->sprite = NULL;
}

void game_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene)
{
    if (game->start == false) {
        sfRenderWindow_setView(buffer->window, buffer->initial_view);
        starter_choice(game, buffer);
    }
    else {
        dup_pokemon(game->starter->pokemon[0], game->fight->opponent_pokemon);
        if (game->fighting == true) {
            destroy_pokemon(game->fight->opponent_pokemon);
            reset_fight(game);
        }
        sfRenderWindow_setView(buffer->window, buffer->view);
        sfRenderWindow_clear(buffer->window, sfBlack);
        check_button_state(buffer, scene, current_scene[0]);
        draw_scene(buffer, scene, current_scene[0]);
        sfRenderWindow_display(buffer->window);
    }
}