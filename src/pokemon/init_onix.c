/*
** EPITECH PROJECT, 2021
** init_onix.c
** File description:
** init onix
*/

#include "rpg.h"

void init_onix(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Onix");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 50;
    pokemon->hp_max = 50;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/onix/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/onix/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Earthquake");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Iron tail");
    pokemon->second_damage = 15;
}