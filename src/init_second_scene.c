/*
** EPITECH PROJECT, 2021
** init_second_scene.c
** File description:
** init second scene
*/

#include "rpg.h"

int init_objs_2(scene_t *scene)
{
    scene[1].objs[0] = NULL;
    return (0);
}

int init_buttons_2(scene_t *scene)
{
    scene[1].buttons[0] = NULL;
    return (0);
}

int init_second_scene(scene_t *scene)
{
    if (malloc_scene(scene, 1, 1, 1) == -1)
        return (-1);
    scene[1].music = NULL;
    if (init_buttons_2(scene) == -1 || init_objs_2(scene) == -1)
        return (-1);
    return (0);
}