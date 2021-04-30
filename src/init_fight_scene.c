/*
** EPITECH PROJECT, 2021
** init_fight_scene.c
** File description:
** init fight scene
*/

#include "rpg.h"

int init_fight_objs(scene_t *scene)
{
    if (init_object(scene[3].objs[0], "assets/fight_bg.png", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 556, 258}) == -1)
        return (-1);
    scene[3].objs[0]->clock = NULL;
    sfSprite_setScale(scene[3].objs[0]->sprite, (sfVector2f){3.46, 2.8});
    if (init_object(scene[3].objs[1], "assets/text_sprite.png", \
(sfVector2f){0, 722}, (sfIntRect){0, 0, 556, 113}) == -1)
        return (-1);
    scene[3].objs[1]->clock = NULL;
    sfSprite_setScale(scene[3].objs[1]->sprite, (sfVector2f){3.46, 2.8});
    scene[3].objs[2] = NULL;
    return (0);
}

int init_fight_button(scene_t *scene)
{
    scene[3].buttons[0] = NULL;
    return (0);
}

int init_fight_scene(scene_t *scene)
{
    if (malloc_scene(scene, 3, 3, 1) == -1)
        return (-1);
    scene[3].music = NULL;
    if (init_fight_button(scene) == -1 || init_fight_objs(scene) == -1)
        return (-1);
    return (0);
}