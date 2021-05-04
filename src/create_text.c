/*
** EPITECH PROJECT, 2021
** create_text.c
** File description:
** create text
*/

#include "rpg.h"

sfText *create_text(sfVector2f pos, char *string, sfFont *font, sfColor color)
{
    sfText *text = sfText_create();

    if (text == NULL)
        return (NULL);
    sfText_setFont(text, font);
    sfText_setColor(text, color);
    sfText_setPosition(text, pos);
    if (string != NULL)
        sfText_setString(text, string);
    return (text);
}