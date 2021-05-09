/*
** EPITECH PROJECT, 2021
** init_pikachu.c
** File description:
** init pikachu
*/

#include "rpg.h"

void init_pikachu(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Pikachu");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/pikachu/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/pikachu/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){5, 5};
    pokemon->first_attack = my_strdup("Lightning");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Thunder");
    pokemon->second_damage = 15;
}