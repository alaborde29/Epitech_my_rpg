/*
** EPITECH PROJECT, 2021
** init_umbreon.c
** File description:
** init umbreon
*/

#include "rpg.h"

void init_umbreon(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Umbreon");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/noctali/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/noctali/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){6, 6};
    pokemon->first_attack = my_strdup("Charge");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Moon ray");
    pokemon->second_damage = 15;
}