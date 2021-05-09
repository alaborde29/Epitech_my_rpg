/*
** EPITECH PROJECT, 2021
** init_diglett.c
** File description:
** init diglett
*/

#include "rpg.h"

void init_diglett(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Diglett");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/taupiqueur/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/taupiqueur/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){6, 7};
    pokemon->first_attack = my_strdup("Sand blast");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Earthquake");
    pokemon->second_damage = 15;
}