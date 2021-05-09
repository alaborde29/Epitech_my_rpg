/*
** EPITECH PROJECT, 2021
** init_exeggutor.c
** File description:
** init exeggutor
*/

#include "rpg.h"

void init_exeggutor(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Exeggutor");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 55;
    pokemon->hp_max = 55;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/grassroot/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/grassroot/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->first_attack = my_strdup("Crushing");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Green storm");
    pokemon->second_damage = 10;
}