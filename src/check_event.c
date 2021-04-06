/*
** EPITECH PROJECT, 2021
** check_event.c
** File description:
** check event
*/

#include "rpg.h"

void check_event(framebuffer_t *buffer, scene_t *scene, int *current_scene)
{
    if (buffer->event.type == sfEvtClosed)
        sfRenderWindow_close(buffer->window);
    if (buffer->event.type == sfEvtMouseButtonReleased)
        check_buttons(scene, buffer, current_scene);
}