/*
** EPITECH PROJECT, 2021
** animate_sprite.c
** File description:
** animate sprite
*/

#include "rpg.h"

void animate_sprite(game_object_t *obj)
{
    obj->rect.left += obj->offset;
    if (obj->rect.left > obj->max_value)
        obj->rect.left = 0;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
}