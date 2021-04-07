/*
** EPITECH PROJECT, 2021
** update_sprite.c
** File description:
** update sprite
*/

#include "rpg.h"

void update_sprite(game_object_t *obj)
{
    float elapsed_time = 0.0;

    obj->time = sfClock_getElapsedTime(obj->clock);
    elapsed_time = obj->time.microseconds / 1000000.0;
    if (elapsed_time > obj->seconds) {
        animate_sprite(obj);
        sfClock_restart(obj->clock);
    }
}

void update_sprites(scene_t *scene, int current_scene)
{
    for (int i = 0; scene[current_scene].objs[i]; i++) {
        if (scene[current_scene].objs[i]->clock == NULL)
            continue;
        update_sprite(scene[current_scene].objs[i]);
    }
}