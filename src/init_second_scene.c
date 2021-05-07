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
    scene[1].objs[0]->offset = 0;
    scene[1].objs[0]->max_value = 0;
    scene[1].objs[0]->clock = NULL;
    if (init_object(scene[1].objs[1], "assets/player_spritesheet.png", \
(sfVector2f){(1920 / 2) - 20, 1080 / 2 - 31}, (sfIntRect){0, 0, 34, 52}) == -1)
        return (-1);
    sfSprite_setScale(scene[1].objs[1]->sprite, (sfVector2f){1.2, 1.2});
    scene[1].objs[1]->clock = sfClock_create();
    scene[1].objs[1]->seconds = 0.1;
    scene[1].objs[1]->offset = 34;
    scene[1].objs[1]->max_value = 102;
    scene[1].objs[2] = NULL;
    return (0);
}

int init_buttons_2(scene_t *scene)
{
    scene[1].buttons[0] = NULL;
    return (0);
}

int init_second_scene(scene_t *scene)
{
    if (malloc_scene(scene, 1, 3, 1) == -1)
        return (-1);
    scene[1].music = NULL;
    if (init_buttons_2(scene) == -1 || init_objs_2(scene) == -1)
        return (-1);
    scene[1].ground_map = init_tile_list();
    return (0);
}