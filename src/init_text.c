/*
** EPITECH PROJECT, 2021
** init_text.c
** File description:
** init text
*/

#include "rpg.h"

int init_text(button_t *button, char *path, \
sfVector2f position, char *string)
{
    button->font = sfFont_createFromFile(path);
    if (button->font == NULL)
        return (-1);
    button->text = sfText_create();
    if (button->text == NULL)
        return (-1);
    sfText_setFont(button->text, button->font);
    sfText_setString(button->text, string);
    sfText_setPosition(button->text, position);
    return (0);
}