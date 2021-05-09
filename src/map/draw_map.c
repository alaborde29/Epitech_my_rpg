/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** draw_map
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

void draw_tile_from_map(framebuffer_t *framebuffer, scene_t scene, char *map, \
sfVector2f pos)
{
    int i = 0;

    for (;map[i] != '\0'; i++) {
        if (map[i] == 'A') {
            sfSprite_setPosition(scene.ground_map[0]->sprite, pos);
            sfRenderWindow_drawSprite(framebuffer->window, \
            scene.ground_map[0]->sprite, NULL);
            pos.x = pos.x + 32;
        }
        else if (map[i] == '\n') {
            pos.y = pos.y + 32;
            pos.x = 0;
        }
        else
            pos.x = pos.x + 32;
    }
}

int draw_map(framebuffer_t *framebuffer, scene_t scene, char *map_path)
{
    char *map_buffer = NULL;

    map_buffer = read_file(map_path, map_buffer);
    if (map_buffer == 0)
        return (0);
    draw_tile_from_map(framebuffer, scene, map_buffer, (sfVector2f){0, 0});
    free(map_buffer);
    return 0;
}