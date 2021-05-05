/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** setup_tile_tab
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

tile_t init_tile_struct\
(sfVector2f tile_pos, sfVector2f tile_size, char id)
{
    tile_t tile;

    tile.id = id;
    tile.tile_pos = tile_pos;
    tile.tile_size = tile_size;
    return (tile);
}

tile_t *init_tile_tab(void)
{
    int i = 0;
    char id = 'A';
    tile_t *tile_tab = malloc(sizeof(tile_t) * (1 + 1));

    while (i != 1) {
        tile_tab[i] = init_tile_struct((sfVector2f){A_TILE_POS_X, \
        A_TILE_POS_Y}, (sfVector2f){A_TILE_SIZE_X, A_TILE_SIZE_Y}, id);
        id++;
        i++;
    }
    return (tile_tab);
}