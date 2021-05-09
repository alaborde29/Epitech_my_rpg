/*
** EPITECH PROJECT, 2021
** init_aerodactyl.c
** File description:
** init aerodactyl
*/

#include "rpg.h"

void init_aerodactyl(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Aerodactyl");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 55;
    pokemon->hp_max = 55;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/ptera/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/ptera/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->first_attack = my_strdup("Ultrasound");
    pokemon->first_damage = 10;
    pokemon->scale = (sfVector2f){4, 4};
    pokemon->second_attack = my_strdup("Flight");
    pokemon->second_damage = 15;
}