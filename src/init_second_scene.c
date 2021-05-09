/*
** EPITECH PROJECT, 2021
** init_second_scene.c
** File description:
** init second scene
*/

#include "rpg.h"

int init_objs_2(scene_t *scene)
{
    if (init_object(scene[1].objs[0], "assets/player_spritesheet.png", \
(sfVector2f){(1920 / 2) - 20, 1080 / 2 - 31}, (sfIntRect){0, 0, 34, 52}) == -1)
        return (-1);
    sfSprite_setScale(scene[1].objs[0]->sprite, (sfVector2f){0.5, 0.5});
    scene[1].objs[0]->clock = sfClock_create();
    scene[1].objs[0]->seconds = 0.1;
    scene[1].objs[0]->offset = 34;
    scene[1].objs[0]->max_value = 102;
    scene[1].objs[1] = NULL;
    return (0);
}

int init_buttons_2(scene_t *scene)
{
    scene[1].buttons[0] = NULL;
    return (0);
}

int init_map_buffer(scene_t *scene)
{
    char *map_buffer = NULL;

    map_buffer = read_file(TEST_GROUND_4, map_buffer);
    if (map_buffer == 0)
        return (0);
    scene->ground_buffer = map_buffer;
    map_buffer = read_file(TEST_ABOVE_4, map_buffer);
    if (map_buffer == 0)
        return (0);
    scene->above_buffer = map_buffer;
    return (0);
}

int init_second_scene(scene_t *scene)
{
    if (malloc_scene(scene, 1, 2, 1) == -1)
        return (-1);
    scene[1].music = NULL;
    init_map_buffer(&scene[1]);
    scene[1].TILE_TAB = create_tile_tab();
    scene[1].TILE_TAB_ABOVE = create_tile_tab_above();
    scene[1].ground_map = init_tile_list(scene[1].TILE_TAB);
    scene[1].above_map = init_tile_list_above(scene[1].TILE_TAB_ABOVE);
    if (init_buttons_2(scene) == -1 || init_objs_2(scene) == -1)
        return (-1);
    return (0);
}