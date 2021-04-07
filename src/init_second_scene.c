/*
** EPITECH PROJECT, 2021
** init_second_scene.c
** File description:
** init second scene
*/

#include "rpg.h"

int init_objs_2(scene_t *scene)
{
    if (init_object(scene[1].objs[0], "assets/start.png", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 722, 638}) == -1)
        return (-1);
    sfSprite_setScale(scene[1].objs[0]->sprite, (sfVector2f){2.66, 1.7});
    scene[1].objs[1] = NULL;
    return (0);
}

int init_buttons_2(scene_t *scene)
{
    scene[1].buttons[0] = NULL;
    return (0);
}

int init_second_scene(scene_t *scene)
{
    if (malloc_scene(scene, 1, 2, 1) == -1)
        return (-1);
    scene[1].music = NULL;
    if (init_buttons_2(scene) == -1 || init_objs_2(scene) == -1)
        return (-1);
    return (0);
}