/*
** EPITECH PROJECT, 2021
** create_tile_tab_above.c
** File description:
** create tile tab above
*/

#include "rpg.h"

void create_tile(tile_t *tile, char c, sfVector2f tile_pos, \
sfVector2f tile_size);

void init_all_sheet2(tile_t *tile)
{
    tile[16].sheet = S_GROUND;
    tile[17].sheet = S_GROUND;
    tile[18].sheet = S_GROUND;
    tile[19].sheet = S_GROUND;
    tile[20].sheet = S_GROUND;
    tile[21].sheet = S_GROUND;
    tile[22].sheet = S_GROUND;
    tile[23].sheet = S_GROUND;
    tile[24].sheet = S_GROUND;
    tile[25].sheet = S_GROUND;
}

void init_all_sheet(tile_t *tile)
{
    tile[0].sheet = S_GROUND;
    tile[1].sheet = S_GROUND;
    tile[2].sheet = S_GROUND;
    tile[3].sheet = S_GROUND;
    tile[4].sheet = S_GROUND;
    tile[5].sheet = S_GROUND;
    tile[6].sheet = S_GROUND;
    tile[7].sheet = S_GROUND;
    tile[8].sheet = S_GROUND;
    tile[9].sheet = S_GROUND;
    tile[10].sheet = S_GROUND;
    tile[11].sheet = S_GROUND;
    tile[12].sheet = S_GROUND;
    tile[13].sheet = S_GROUND;
    tile[14].sheet = S_GROUND;
    tile[15].sheet = S_GROUND;
    init_all_sheet2(tile);
}

void init_second_part_tile(tile_t *tile)
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

void init_all_tiles(tile_t *tile)
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
    init_second_part_tile(tile);
}

tile_t *create_tile_tab_above(void)
{
    tile_t *tile = malloc(sizeof(tile_t) * 26);

    create_tile(&tile[0], 'A', (sfVector2f){96, 2240}, \
(sfVector2f){16, 16});
    create_tile(&tile[1], 'B', (sfVector2f){12, 83}, \
(sfVector2f){40, 45});
    create_tile(&tile[2], 'C', (sfVector2f){232, 2183}, \
(sfVector2f){16, 16});
    create_tile(&tile[3], 'D', (sfVector2f){64, 2000}, \
(sfVector2f){16, 16});
    create_tile(&tile[4], 'E', (sfVector2f){105, 10126}, \
(sfVector2f){38, 49});
    create_tile(&tile[5], 'F', (sfVector2f){32, 2016}, \
(sfVector2f){16, 16});
    create_tile(&tile[6], 'G', (sfVector2f){64, 2016}, \
(sfVector2f){16, 16});
    init_all_tiles(tile);
    init_all_sheet(tile);
    return (tile);
}