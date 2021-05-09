/*
** EPITECH PROJECT, 2021
** create_tile_tab.c
** File description:
** create tile tab
*/

#include "rpg.h"

void init_all_sheet(tile_t *tile);

void create_tile(tile_t *tile, char c, sfVector2f tile_pos, \
sfVector2f tile_size)
{
    tile->id = c;
    tile->tile_pos = tile_pos;
    tile->tile_size = tile_size;
}

void init_all_tile2(tile_t *tile)
{
    create_tile(&tile[16], 'Q', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[17], 'R', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[18], 'S', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[19], 'T', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[20], 'U', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[21], 'V', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[22], 'W', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[23], 'X', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[24], 'Y', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[25], 'Z', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
}

void init_all_tile(tile_t *tile)
{
    create_tile(&tile[7], 'H', (sfVector2f){16, 2048}, \
(sfVector2f){16, 16});
    create_tile(&tile[8], 'I', (sfVector2f){32, 2048}, \
(sfVector2f){16, 16});
    create_tile(&tile[9], 'J', (sfVector2f){64, 2048}, \
(sfVector2f){16, 16});
    create_tile(&tile[10], 'K', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[11], 'L', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[12], 'M', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[13], 'N', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[14], 'O', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[15], 'P', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    init_all_tile2(tile);
}

tile_t *create_tile_tab(void)
{
    tile_t *tile = malloc(sizeof(tile_t) * 26);

    create_tile(&tile[0], 'A', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[1], 'B', (sfVector2f){16, 2000}, \
(sfVector2f){16, 16});
    create_tile(&tile[2], 'C', (sfVector2f){32, 2000}, \
(sfVector2f){16, 16});
    create_tile(&tile[3], 'D', (sfVector2f){64, 2000}, \
(sfVector2f){16, 16});
    create_tile(&tile[4], 'E', (sfVector2f){16, 2016}, \
(sfVector2f){16, 16});
    create_tile(&tile[5], 'F', (sfVector2f){32, 2016}, \
(sfVector2f){16, 16});
    create_tile(&tile[6], 'G', (sfVector2f){64, 2016}, \
(sfVector2f){16, 16});
    init_all_tile(tile);
    init_all_sheet(tile);
    return (tile);
}