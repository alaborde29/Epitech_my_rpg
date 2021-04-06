/*
** EPITECH PROJECT, 2021
** start_game.c
** File description:
** start game
*/

#include "rpg.h"

void start_game(framebuffer_t *buffer, scene_t *scene)
{
    int current_scene = 0;

    while (sfRenderWindow_isOpen(buffer->window)) {
        while (sfRenderWindow_pollEvent(buffer->window, &buffer->event)) {
            if (buffer->event.type == sfEvtClosed)
                sfRenderWindow_close(buffer->window);
        }
        sfRenderWindow_clear(buffer->window, sfBlack);
        draw_scene(buffer, scene, current_scene);
        sfRenderWindow_display(buffer->window);
    }
}