/*
** EPITECH PROJECT, 2021
** init_golbat.c
** File description:
** init golbat
*/

#include "rpg.h"

void init_golbat(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Golbat");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/nosferalto/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/nosferalto/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4.5, 4.5};
    pokemon->first_attack = my_strdup("Ultrasound");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Madness wave");
    pokemon->second_damage = 15;
}