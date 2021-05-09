/*
** EPITECH PROJECT, 2021
** init_framebuffer.c
** File description:
** init framebuffer
*/

#include "rpg.h"

framebuffer_t *create_framebuffer(sfVideoMode mode)
{
    framebuffer_t *buffer = malloc(sizeof(framebuffer_t));

    if (buffer == NULL)
        return (NULL);
    buffer->window = sfRenderWindow_create(mode, "my_rpg", sfClose, NULL);
    buffer->view = sfView_createFromRect((sfFloatRect){0, 0, 1920, 1080});
    sfView_zoom(buffer->view, 10);
    sfView_setSize(buffer->view, (sfVector2f){800, 600});
    sfView_setViewport(buffer->view, (sfFloatRect){0, 0, 1, 1});
    sfRenderWindow_setFramerateLimit(buffer->window, 60);
    buffer->initial_view = \
sfView_createFromRect((sfFloatRect){0, 0, 1920, 1080});
    sfView_setViewport(buffer->initial_view, (sfFloatRect){0, 0, 1, 1});
    if (buffer->window == NULL)
        return (NULL);
    buffer->mode = mode;
    return (buffer);
}