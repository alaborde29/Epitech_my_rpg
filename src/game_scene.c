/*
** EPITECH PROJECT, 2021
** game_scene.c
** File description:
** game scene
*/

#include "rpg.h"

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
            game->fighting = false;
        }
        sfRenderWindow_setView(buffer->window, buffer->view);
        sfRenderWindow_clear(buffer->window, sfBlack);
        check_button_state(buffer, scene, current_scene[0]);
        draw_scene(buffer, scene, current_scene[0]);
        sfRenderWindow_display(buffer->window);
    }
}