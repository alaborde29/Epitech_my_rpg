/*
** EPITECH PROJECT, 2021
** destroy_map.c
** File description:
** destroy map
*/

#include "rpg.h"

void destroy_objs(game_object_t **objs);

void destroy_map(scene_t scene)
{
    free(scene.ground_buffer);
    free(scene.above_buffer);
    destroy_objs(scene.ground_map);
    destroy_objs(scene.above_map);
}