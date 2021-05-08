/*
** EPITECH PROJECT, 2021
** init_all_scene.c
** File description:
** init all scene
*/

#include "rpg.h"

int init_all_scene(scene_t *scene)
{
    if (init_first_scene(scene) == -1)
        return (-1);
    if (init_second_scene(scene) == -1)
        return (-1);
    if (init_third_scene(scene) == -1)
        return (-1);
    if (init_fight_scene(scene) == -1)
        return (-1);
    if (init_fourth_scene(scene) == -1)
        return (-1);
    if (init_htp_scene(scene) == -1)
        return (-1);
    return (0);
}