/*
** EPITECH PROJECT, 2021
** starter_choice.c
** File description:
** starter_choice
*/

#include "rpg.h"

void draw_starter(game_t *game, framebuffer_t *buffer)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    sfRenderWindow_drawSprite(buffer->window, game->starter->bg_sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, \
game->starter->pokemon[0]->sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, \
game->starter->pokemon[1]->sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, \
game->starter->pokemon[2]->sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, game->starter->sprite, NULL);
    sfRenderWindow_display(buffer->window);
}

void starter_choice(game_t *game, framebuffer_t *buffer)
{
    draw_starter(game, buffer);
}