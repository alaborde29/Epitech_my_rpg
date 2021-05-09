/*
** EPITECH PROJECT, 2021
** init_zapdos.c
** File description:
** init zapdos
*/

#include "rpg.h"

void init_zapdos(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Zapdop");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 65;
    pokemon->hp_max = 65;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/electhor/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/electhor/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Lightning");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Discharge");
    pokemon->second_damage = 15;
}