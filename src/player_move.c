/*
** EPITECH PROJECT, 2021
** player_move.c
** File description:
** player move
*/

#include "rpg.h"

void left_move(game_object_t *obj)
{
    obj->rect.top = 52;
    sfSprite_move(obj->sprite, (sfVector2f){-5, 0});
    obj->position.x -= 5;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    update_sprite(obj);
}

void right_move(game_object_t *obj)
{
    obj->rect.top = 104;
    sfSprite_move(obj->sprite, (sfVector2f){5, 0});
    obj->position.x += 5;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    update_sprite(obj);
}

void up_move(game_object_t *obj)
{
    obj->rect.top = 156;
    sfSprite_move(obj->sprite, (sfVector2f){0, -5});
    obj->position.y -= 5;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    update_sprite(obj);
}

void down_move(game_object_t *obj)
{
    obj->rect.top = 0;
    sfSprite_move(obj->sprite, (sfVector2f){0, 5});
    obj->position.y += 5;
    sfSprite_setTextureRect(obj->sprite, obj->rect);
    update_sprite(obj);
}