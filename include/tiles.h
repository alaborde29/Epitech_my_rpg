/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** tiles
*/

#include <SFML/Graphics.h>

#ifndef TILES_H_
#define TILES_H_

/*MAP PATH GROUND*/

#define TEST_GROUND_1 "assets/map_files/Test_big_flatzone"
#define TEST_GROUND_2 "assets/map_files/Test_small_flatzone"
#define TEST_GROUND_3 "assets/map_files/Test_a_lot_of_tiles"
#define TEST_GROUND_4 "assets/map_files/Test_multiple_tile_and_map"

/*MAP PATH ABVOE*/

#define TEST_ABOVE_4 "assets/map_files/Test_multiple_tile_and_map_above"

/*TILE SPRITE*/

#define S_GROUND "assets/tileset/tileset_ground.png"
#define S_ABOVE "assets/tileset/tileset_above.png"

/* STRUCTS */

typedef struct tile_s {
    char id;
    sfVector2f tile_pos;
    sfVector2f tile_size;
    char *sheet;
}tile_t;

#endif /* !TILES_H_ */
