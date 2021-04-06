/*
** EPITECH PROJECT, 2021
** create_object.c
** File description:
** create object
*/

#include "rpg.h"

int init_object(game_object_t *obj, char *path, \
sfVector2f position, sfIntRect rect)
{
    obj->texture = \
sfTexture_createFromFile(path, NULL);
    if (obj->texture == NULL)
        return (-1);
    obj->sprite = sfSprite_create();
    if (obj->sprite == NULL)
        return (-1);
    sfSprite_setTexture(obj->sprite, obj->texture, sfTrue);
    sfSprite_setPosition(obj->sprite, position);
    obj->position = position;
    obj->rect = rect;
    sfSprite_setTextureRect(obj->sprite, \
rect);
    return (0);
}