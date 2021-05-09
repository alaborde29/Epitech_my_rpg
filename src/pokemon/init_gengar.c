/*
** EPITECH PROJECT, 2021
** init_gengar.c
** File description:
** init gengar
*/

#include "rpg.h"

void init_gengar(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Gengar");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 55;
    pokemon->hp_max = 55;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/ectoplasma/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/ectoplasma/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Shadow Punch");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Will-O-Wisp");
    pokemon->second_damage = 15;
}