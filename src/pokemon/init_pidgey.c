/*
** EPITECH PROJECT, 2021
** init_pidgey.c
** File description:
** init pidgey
*/

#include "rpg.h"

void init_pidgey(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Pidgey");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 40;
    pokemon->hp_max = 40;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/roocool/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/roocool/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Sand blast");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Windbreaker");
    pokemon->second_damage = 15;
}