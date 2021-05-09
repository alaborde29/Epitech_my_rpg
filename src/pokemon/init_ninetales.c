/*
** EPITECH PROJECT, 2021
** init_ninetales.c
** File description:
** init ninetales
*/

#include "rpg.h"

void init_ninetales(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Ninetales");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 60;
    pokemon->hp_max = 60;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/feunard/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/feunard/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Charge");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Flame");
    pokemon->second_damage = 15;
}