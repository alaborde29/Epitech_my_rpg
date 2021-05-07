/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** init_tile_list
*/

#include "rpg.h"

static const tile_t TILE_TAB[] = {
    {.id = 'A', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){32, 32}},
    {.id = '!', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){32, 32}
    }
};

int free_tile_list(game_object_t **tile_list, int i)
{
    for (i--; i >= 0; i++) {
        free(tile_list[i]);
    }
    free(tile_list);
    return (0);
}

game_object_t **malloc_tile_list(game_object_t **tile_list)
{
    int i = 0;
    int max_size = 1;

    tile_list = malloc(sizeof(game_object_t *) * (max_size + 1));
    if (!tile_list)
        return NULL;
    tile_list[max_size] = NULL;
    while (i != max_size) {
        tile_list[i] = malloc(sizeof(game_object_t) * (max_size + 1));
        if (!tile_list[i])
            free_tile_list(tile_list, i);
        i++;
    }
    return (tile_list);
}

void put_tiles_in_list(game_object_t **tile_list)
{
    int max_size = 1;
    int i = 0;

    while (i != max_size) {
        init_object(tile_list[i], TILE_SHEET_GROUND, \
        (sfVector2f){0,0}, init_rect(TILE_TAB[i].tile_size.x, TILE_TAB[i]\
        .tile_size.y, TILE_TAB[i].tile_pos.x, TILE_TAB[i].tile_pos.y));
        tile_list[i]->tile = TILE_TAB[i];
        i++;
    }
}

game_object_t **init_tile_list(void)
{
    game_object_t **tile_list = 0;

    tile_list = malloc_tile_list(tile_list);

    put_tiles_in_list(tile_list);
    return (tile_list);
}