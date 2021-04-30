/*
** EPITECH PROJECT, 2021
** callback.c
** File description:
** callback
*/

#include "rpg.h"

void quit_game(int *current_scene, scene_t *scene, sfRenderWindow *window)
{
    sfRenderWindow_close(window);
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
}

void switch_to_game(int *current_scene, scene_t *scene, sfRenderWindow *window)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    current_scene[0] = 1;
    sfRenderWindow_clear(window, sfBlack);
}

void switch_to_fight(int *current_scene, scene_t *scene)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    (*current_scene) = 3;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_play(scene[current_scene[0]].music);
}

void switch_to_pause(int *current_scene, scene_t *scene)
{
    if (scene[current_scene[0]].music != NULL)
        sfMusic_stop(scene[current_scene[0]].music);
    (*current_scene) = 2;
    if (scene[current_scene[0]].music != NULL)
        sfMusic_play(scene[current_scene[0]].music);
}