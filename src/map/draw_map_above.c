/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** draw_map
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

void draw_tile_from_map_above(framebuffer_t *framebuffer, scene_t scene, \
char *map, sfVector2f pos)
{
    int i = 0;
    int j = 0;

    for (;map[i] != '\0'; i++) {
        while (j != 9 && map[i] != scene.TILE_TAB_ABOVE[j].id)
            j++;
        if (map[i] == scene.TILE_TAB_ABOVE[j].id) {
            sfSprite_setPosition(scene.above_map[j]->sprite, pos);
            sfRenderWindow_drawSprite(framebuffer->window, \
            scene.above_map[j]->sprite, NULL);
            pos.x = pos.x + 16;
        }
        else if (map[i] == '\n') {
            pos.y = pos.y + 15;
            pos.x = 0;
        }
        else
            pos.x = pos.x + 16;
        j = 0;
    }
}

int draw_map_above(framebuffer_t *framebuffer, scene_t scene)
{
    draw_tile_from_map_above(framebuffer, scene, scene.above_buffer, \
(sfVector2f){0, 0});
    return 0;
}