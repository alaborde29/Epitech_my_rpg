/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** draw_map
*/

#include "my.h"
#include "rpg.h"
#include "tiles.h"

void draw_tile_from_map(framebuffer_t *framebuffer, scene_t scene, char *map, \
sfVector2i pos)
{
    int i = 0;

    my_putchar('a');
    for (int j = 0; map[i] != '\0'; j = 0) {
        my_put_nbr(i);
        my_putchar('\n');
        for (;scene.ground_map[j]->tile.id != '!' && \
        map[i] != scene.ground_map[j]->tile.id; j++) {
            my_put_nbr('j');
            my_putchar('\n');
        }
        if (scene.ground_map[j]->tile.id == '!')
            i++;
        else if (map[i] == '\n') {
            my_putchar('c');
            pos.y = pos.y + 32;
            pos.x = 0;
            i++;
        }
        else {
            my_putchar('d');
            sfRenderWindow_setPosition(framebuffer->window, pos);
            sfRenderWindow_drawSprite(framebuffer->window, \
            scene.ground_map[j]->sprite, NULL);
            pos.x = pos.x + 32;
            i++;
        }
    }
}

int draw_map(framebuffer_t *framebuffer, scene_t scene, char *map_path)
{
    char *map_buffer = NULL;

    map_buffer = read_file(map_path, map_buffer);
    if (map_buffer == 0)
        return (0);
    sfRenderWindow_drawSprite(framebuffer->window, \
    scene.ground_map[0]->sprite, NULL);
    //draw_tile_from_map(framebuffer, scene, map_buffer, (sfVector2i){0, 0});
    return 0;
}