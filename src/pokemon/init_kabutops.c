/*
** EPITECH PROJECT, 2021
** init_kabutops.c
** File description:
** init kabutops
*/

#include "rpg.h"

void init_kabutops(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Kabutops");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/kabutops/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/kabutops/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Claw");
    pokemon->first_damage = 12;
    pokemon->second_attack = my_strdup("Vampirism");
    pokemon->second_damage = 17;
}