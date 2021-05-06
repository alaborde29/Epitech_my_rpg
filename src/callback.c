/*
** EPITECH PROJECT, 2021
** callback.c
** File description:
** callback
*/

#include "rpg.h"

void quit_game(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    sfRenderWindow_close(buffer->window);
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    if (game->start == true)
        game->start = true;
}

void switch_to_game(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    current_scene[0] = 1;
    sfRenderWindow_clear(buffer->window, sfBlack);
    if (game->start == true)
        game->start = true;
}

void switch_to_fight(int *current_scene, scene_t *scene, \
framebuffer_t *buffer)
{
    sfRenderWindow_setView(buffer->window, buffer->initial_view);
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    (*current_scene) = 3;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_play(scene[current_scene[0]].music);
}

void switch_to_pause(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    sfRenderWindow_setView(buffer->window, buffer->initial_view);
    game->fight->attack_choose = false;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    (*current_scene) = 2;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_play(scene[current_scene[0]].music);
}

void switch_to_inventory(int *current_scene, scene_t *scene, \
framebuffer_t *buffer)
{
    sfRenderWindow_setView(buffer->window, buffer->initial_view);
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    (*current_scene) = 4;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_play(scene[current_scene[0]].music);
}