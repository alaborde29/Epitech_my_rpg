/*
** EPITECH PROJECT, 2021
** init_growlithe.c
** File description:
** init growlithe
*/

#include "rpg.h"

void init_growlithe(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Growlithe");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 40;
    pokemon->hp_max = 40;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/caninos/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/caninos/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Ember");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Flame Wheel");
    pokemon->second_damage = 15;
}