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
    int j = 0;

    for (;map[i] != '\0'; i++) {
        while (j != 9 && map[i] != scene.TILE_TAB[j].id)
            j++;
        if (map[i] == scene.TILE_TAB[j].id) {
            sfSprite_setPosition(scene.ground_map[j]->sprite, pos);
            sfRenderWindow_drawSprite(framebuffer->window, \
            scene.ground_map[j]->sprite, NULL);
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

int draw_map(framebuffer_t *framebuffer, scene_t scene)
{
    draw_tile_from_map(framebuffer, scene, scene.ground_buffer, \
(sfVector2f){0, 0});
    return 0;
}