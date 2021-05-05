/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** draw_map
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

void draw_map(framebuffer_t *framebuffer, scene_t scene)
{
    int i = 0;
    int j = 0;

    while (scene.ground_map[i]) {
        while (scene.ground_map[i][j]) {
            sfRenderWindow_drawSprite(framebuffer->window, \
            scene.ground_map[i][j]->sprite, NULL);
            j++;
        }
        i++;
    }
    return ;
}