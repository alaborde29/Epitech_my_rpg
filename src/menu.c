/*
** EPITECH PROJECT, 2021
** menu.c
** File description:
** menu
*/

#include "rpg.h"

void menu(scene_t *scene, framebuffer_t *buffer, int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    draw_scene(buffer, scene, current_scene[0]);
    sfRenderWindow_display(buffer->window);
}