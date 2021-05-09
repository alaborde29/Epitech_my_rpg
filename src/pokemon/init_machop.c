/*
** EPITECH PROJECT, 2021
** init_machop
** File description:
** init machop
*/

#include "rpg.h"

void init_machop(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Machop");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 40;
    pokemon->hp_max = 40;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/machoc/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/machoc/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){6, 6};
    pokemon->first_attack = my_strdup("Brush");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Double slap");
    pokemon->second_damage = 15;
}