/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** init_tile
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

game_object_t ***malloc_tile_map(char *map_buffer)
{
    int i = 0;
    game_object_t ***map = malloc(sizeof(game_object_t **) * \
    (count_str_lines(map_buffer) + 1));

    while (i != count_str_lines(map_buffer)) {
        map[i] = malloc(sizeof(game_object_t *) * \
        (linelen_from_n_line(map_buffer, i) + 1));
        i++;
    }
    map[i] = 0;
    return (map);
}

game_object_t **setup_map_tile_line\
(game_object_t **map_line, char *map_buffer, int n_line, int y)
{
    int i = 0;
    int x = 0;
    int k = 0;
    tile_t *tile_tab = init_tile_tab();

    for (int n = 0; map_buffer[i] != '\0' || n != n_line; i++) {
        if (map_buffer[i] == '\n')
            n++;
    }
    i = i + 1;
    for (int j = 0; map_buffer[i] != '\n' && map_buffer[i] != '\0'; j++, i++) {
        while (k != 1 && map_buffer[i] != tile_tab[k].id) {
            k++;
        }
        map_line[j]->position = (sfVector2f){x, y};
        init_object(map_line[j], "assets/tileset/tileset.png", \
        map_line[j]->position, init_rect(33, 32, 95, 2240));
        x = x + 33;
    }
    return (map_line);
}

game_object_t ***put_tiles_in_map(game_object_t ***map, char *map_buffer)
{
    int i = 0;
    int y = 0;
    int n_line = count_str_lines(map_buffer);

    while (i != n_line) {
        setup_map_tile_line(map[i], map_buffer, i, y);
        y = y + 32;
        i++;
    }
    return (map);
}

int init_tile(game_object_t ***map, char *map_path)
{
    char *map_buffer = 0;

    read_file(map_path, map_buffer);
    if (map_buffer == 0)
        return (-1);
    map = malloc_tile_map(map_buffer);
    map = put_tiles_in_map(map, map_buffer);
    return (0);
}