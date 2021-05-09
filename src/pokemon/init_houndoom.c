/*
** EPITECH PROJECT, 2021
** init_houndoom.c
** File description:
** init houndoom
*/

#include "rpg.h"

void init_houndoom(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Houndoom");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 50;
    pokemon->hp_max = 50;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/demollose/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/demollose/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Inferno");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Thunder Fang");
    pokemon->second_damage = 15;
}