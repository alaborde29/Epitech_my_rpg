/*
** EPITECH PROJECT, 2021
** init_gloom.c
** File description:
** init gloom
*/

#include "rpg.h"

void init_gloom(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Gloom");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 50;
    pokemon->hp_max = 50;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/ortide/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/ortide/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Toxic Powder");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Floral storm");
    pokemon->second_damage = 15;
}