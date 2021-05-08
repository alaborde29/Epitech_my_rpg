/*
** EPITECH PROJECT, 2021
** callback2.c
** File description:
** other callback
*/

#include "rpg.h"

void switch_to_htp(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    current_scene[0] = 5;
    sfRenderWindow_clear(buffer->window, sfBlack);
    if (game->start == true)
        game->start = true;
}

void switch_to_menu(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    current_scene[0] = 0;
    sfRenderWindow_clear(buffer->window, sfBlack);
    if (game->start == true)
        game->start = true;
}