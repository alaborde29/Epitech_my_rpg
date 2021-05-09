/*
** EPITECH PROJECT, 2021
** init_dragonite.c
** File description:
** init dragonite
*/

#include "rpg.h"

void init_dragonite(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Dragonite");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 55;
    pokemon->hp_max = 55;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/dracollose/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/dracollose/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Ultralaser");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Hurricane");
    pokemon->second_damage = 15;
}