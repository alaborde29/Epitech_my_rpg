/*
** EPITECH PROJECT, 2021
** init_feraligatr.c
** File description:
** init feraligatr
*/

#include "rpg.h"

void init_feraligatr(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Feraligatr");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 65;
    pokemon->hp_max = 65;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/alligatueur/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/alligatueur/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Water Gun");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Ice Fang");
    pokemon->second_damage = 15;
}