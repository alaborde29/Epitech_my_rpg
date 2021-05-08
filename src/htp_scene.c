/*
** EPITECH PROJECT, 2021
** htp_scene.c
** File description:
** how to play scene
*/

#include "rpg.h"

void htp_scene(framebuffer_t *buffer, scene_t *scene, int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    draw_scene(buffer, scene, current_scene[0]);
    sfRenderWindow_display(buffer->window);
}