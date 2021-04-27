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
    if (game->start == false)
        starter_choice(game, buffer);
    else {
        sfRenderWindow_clear(buffer->window, sfBlack);
        check_button_state(buffer, scene, current_scene[0]);
        draw_scene(buffer, scene, current_scene[0]);
        sfRenderWindow_display(buffer->window);
    }
}