/*
** EPITECH PROJECT, 2021
** malloc_scene.c
** File description:
** malloc scene
*/

#include "rpg.h"

int malloc_scene(scene_t *scene, int current_scene, int nb_objs, int nb_buttons)
{
    scene[current_scene].buttons = malloc(sizeof(button_t *) * nb_buttons);
    if (scene[current_scene].buttons == NULL)
        return (-1);
    for (int i = 0; i < nb_buttons; i++) {
        scene[current_scene].buttons[i] = malloc(sizeof(button_t));
        if (scene[current_scene].buttons[i] == NULL)
            return (-1);
    }
    scene[current_scene].objs = malloc(sizeof(game_object_t) * nb_objs);
    if (scene[current_scene].objs == NULL)
        return (-1);
    for (int i = 0; i < nb_objs; i++) {
        scene[current_scene].objs[i] = malloc(sizeof(struct game_object_s));
        if (scene[current_scene].objs[i] == NULL)
            return (-1);
    }
    return (0);
}