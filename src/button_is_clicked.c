/*
** EPITECH PROJECT, 2021
** button_is_clicked
** File description:
** check button
*/

#include "rpg.h"

int button_is_clicked(button_t *button, sfVector2f click_position)
{
    if ((click_position.x >= button->position.x && \
click_position.x <= button->position.x + button->size.x) && \
(click_position.y >= button->position.y && \
click_position.y <= button->position.y + button->size.y))
        return (1);
    else
        return (0);
}