/*
** EPITECH PROJECT, 2021
** utils_fight.c
** File description:
** utils fight
*/

#include "rpg.h"

void display_text(framebuffer_t *buffer, sfText *text)
{
    sfRenderWindow_drawText(buffer->window, text, NULL);
}

void display_button(framebuffer_t *buffer, button_t **buttons)
{
    for (int i = 0; buttons[i]; i++) {
        sfRenderWindow_drawRectangleShape(buffer->window, \
buttons[i]->rect, NULL);
    }
}