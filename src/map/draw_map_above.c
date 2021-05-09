/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** draw_map
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

static const tile_t TILE_TAB[] = {
    {.id = 'A', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'B', .tile_pos = (sfVector2f){12, 83}, \
    .tile_size = (sfVector2f){40, 45}, .sheet = S_GROUND},
    {.id = 'C', .tile_pos = (sfVector2f){232, 2183}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'D', .tile_pos = (sfVector2f){64, 2000}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'E', .tile_pos = (sfVector2f){105, 10126}, \
    .tile_size = (sfVector2f){38, 49}, .sheet = S_GROUND},
    {.id = 'F', .tile_pos = (sfVector2f){32, 2016}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'G', .tile_pos = (sfVector2f){64, 2016}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'H', .tile_pos = (sfVector2f){16, 2048}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'I', .tile_pos = (sfVector2f){32, 2048}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'J', .tile_pos = (sfVector2f){64, 2048}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'K', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'L', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'M', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'N', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'O', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'P', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'Q', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'R', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'S', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'T', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'U', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'V', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'W', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'X', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'Y', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'Z', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND
    }
};

void draw_tile_from_map_above(framebuffer_t *framebuffer, scene_t scene, \
char *map, sfVector2f pos)
{
    int i = 0;
    int j = 0;

    for (;map[i] != '\0'; i++) {
        while (j != 9 && map[i] != TILE_TAB[j].id)
            j++;
        if (map[i] == TILE_TAB[j].id) {
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