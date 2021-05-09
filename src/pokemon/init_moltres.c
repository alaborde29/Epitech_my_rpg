/*
** EPITECH PROJECT, 2021
** init_moltres.c
** File description:
** init moltres
*/

#include "rpg.h"

void init_moltres(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Moltres");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 55;
    pokemon->hp_max = 55;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/sulfura/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/sulfura/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Flame");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Ultimate Flame");
    pokemon->second_damage = 15;
}