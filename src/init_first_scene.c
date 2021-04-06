/*
** EPITECH PROJECT, 2021
** init_first_scene.c
** File description:
** init first scene
*/

#include "rpg.h"

int init_objs_1(scene_t *scene)
{
    init_object(scene[0].objs[0], "assets/téléchargement.jpg", \
(sfVector2f){0, 0}, (sfIntRect){0, 0, 1920, 1080});
    init_object(scene[0].objs[1], "assets/logo.png", \
(sfVector2f){720, 0}, (sfIntRect){0, 0, 1200, 442});
    sfSprite_setScale(scene[0].objs[1]->sprite, (sfVector2f){0.4, 0.4});
    scene[0].objs[2] = NULL;
    return (0);
}

int init_button_1(scene_t *scene)
{
    init_button(scene[0].buttons[0], (sfVector2f){0, 0}, \
(sfVector2f){100, 100}, "assets/button.png");
    scene[0].buttons[1] = NULL;
    return (0);
}

int init_first_scene(scene_t *scene)
{
    if (malloc_scene(scene, 0, 3, 2) == -1)
        return (-1);
    if (init_button_1(scene) == -1 || init_objs_1(scene) == -1)
        return (-1);
    return (0);
}