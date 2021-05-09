/*
** EPITECH PROJECT, 2021
** init_meowth.c
** File description:
** init meowth
*/

#include "rpg.h"

void init_meowth(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Meowth");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 45;
    pokemon->hp_max = 45;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/miaouss/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/miaouss/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){6, 6};
    pokemon->first_attack = my_strdup("Claw");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Slice");
    pokemon->second_damage = 15;
}