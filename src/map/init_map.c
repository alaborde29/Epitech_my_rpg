/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** init_map
*/

#include "my.h"
#include "rpg.h"

void init_map(char *map_path)
{
    game_object_t ***ground_tab;

    init_tile(ground_tab, map_path);

}