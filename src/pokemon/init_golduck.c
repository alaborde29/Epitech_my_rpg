/*
** EPITECH PROJECT, 2021
** init_golduck.c
** File description:
** init golduck
*/

#include "rpg.h"

void init_golduck(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Golduck");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 50;
    pokemon->hp_max = 50;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/akwakwak/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/akwakwak/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Aqua Jet");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Surf");
    pokemon->second_damage = 15;
}