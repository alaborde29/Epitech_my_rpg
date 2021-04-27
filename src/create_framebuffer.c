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
    sfRenderWindow_setFramerateLimit(buffer->window, 60);
    if (buffer->window == NULL)
        return (NULL);
    buffer->mode = mode;
    return (buffer);
}