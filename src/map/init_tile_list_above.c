/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** init_tile_list
*/

#include "rpg.h"

static const tile_t TILE_TAB[] = {
    {.id = 'A', .tile_pos = (sfVector2f){96, 2240}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'B', .tile_pos = (sfVector2f){12, 83}, \
    .tile_size = (sfVector2f){40, 45}, .sheet = S_GROUND},
    {.id = 'C', .tile_pos = (sfVector2f){232, 2183}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'D', .tile_pos = (sfVector2f){64, 2000}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
    {.id = 'E', .tile_pos = (sfVector2f){16, 2016}, \
    .tile_size = (sfVector2f){16, 16}, .sheet = S_GROUND},
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

int free_tile_list_above(game_object_t **tile_list, int i)
{
    for (i--; i >= 0; i++) {
        free(tile_list[i]);
    }
    free(tile_list);
    return (0);
}

game_object_t **malloc_tile_list_above(game_object_t **tile_list)
{
    int i = 0;
    int max_size = 10;

    tile_list = malloc(sizeof(game_object_t *) * (max_size + 1));
    if (!tile_list)
        return NULL;
    tile_list[max_size] = NULL;
    while (i != max_size) {
        tile_list[i] = malloc(sizeof(game_object_t) * (max_size + 1));
        if (!tile_list[i])
            free_tile_list_above(tile_list, i);
        i++;
    }
    return (tile_list);
}

void put_tiles_in_list_above(game_object_t **tile_list)
{
    int max_size = 10;
    int i = 0;

    while (i != max_size) {
        init_object(tile_list[i], TILE_TAB[i].sheet, \
        (sfVector2f){0,0}, init_rect(TILE_TAB[i].tile_size.x, TILE_TAB[i]\
        .tile_size.y, TILE_TAB[i].tile_pos.x, TILE_TAB[i].tile_pos.y));
        tile_list[i]->tile = TILE_TAB[i];
        i++;
    }
}

game_object_t **init_tile_list_above(void)
{
    game_object_t **tile_list = 0;

    tile_list = malloc_tile_list_above(tile_list);

    put_tiles_in_list_above(tile_list);
    return (tile_list);
}