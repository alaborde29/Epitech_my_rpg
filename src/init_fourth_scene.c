/*
** EPITECH PROJECT, 2021
** init_fourth_scene.c
** File description:
** init_fourth_scene
*/

#include "rpg.h"

int init_objs_4(scene_t *scene)
{
    if (init_object(scene[4].objs[0], "assets/inventory.jpg", \
(sfVector2f){680, 220}, (sfIntRect){0, 0, 600, 734}) == -1)
        return (-1);
    scene[4].objs[0]->clock = NULL;
    scene[4].objs[1] = NULL;
    return (0);
}

int init_buttons_4(scene_t *scene)
{
    scene[4].buttons[0] = NULL;
    return (0);
}

int init_fourth_scene(scene_t *scene)
{
    if (malloc_scene(scene, 4, 2, 1) == -1)
        return (-1);
    scene[4].music = NULL;
    if (init_buttons_4(scene) == -1 || init_objs_4(scene) == -1)
        return (-1);
    return (0);
}