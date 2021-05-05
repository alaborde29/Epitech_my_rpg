/*
** EPITECH PROJECT, 2021
** game_scene.c
** File description:
** game scene
*/

#include "rpg.h"

void inventory(scene_t *scene, framebuffer_t *buffer, int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    draw_scene(buffer, scene, current_scene[0]);
    sfRenderWindow_display(buffer->window);
}