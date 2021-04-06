/*
** EPITECH PROJECT, 2021
** create_button.c
** File description:
** create button
*/

#include "rpg.h"

int init_button(button_t *button, sfVector2f position, \
sfVector2f size, char *path)
{
    button->rect = sfRectangleShape_create();
    if (button->rect == NULL)
        return (-1);
    button->texture = sfTexture_createFromFile(path, NULL);
    if (button->texture == NULL)
        return (-1);
    sfRectangleShape_setTexture(button->rect, button->texture, sfTrue);
    sfRectangleShape_setPosition(button->rect, position);
    sfRectangleShape_setSize(button->rect, size);
    button->size = size;
    button->original_size = size;
    button->position.x = position.x - size.x / 2;
    button->position.y = position.y - size.y / 2;
    return (0);
}