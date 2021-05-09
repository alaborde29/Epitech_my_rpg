/*
** EPITECH PROJECT, 2021
** init_mewtwo
** File description:
** init mewtwo
*/

#include "rpg.h"

void init_mewtwo(pokemon_t *pokemon)
{
    pokemon->name = my_strdup("Mewtwo");
    pokemon->level = 1;
    pokemon->xp = 0;
    pokemon->hp = 70;
    pokemon->hp_max = 70;
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = \
sfTexture_createFromFile("assets/pokemon/mewtwo/front.png", NULL);
    pokemon->back_texture = \
sfTexture_createFromFile("assets/pokemon/mewtwo/back.png", NULL);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->scale = (sfVector2f){4.5, 4.5};
    pokemon->first_attack = my_strdup("Psyko");
    pokemon->first_damage = 10;
    pokemon->second_attack = my_strdup("Madness wave");
    pokemon->second_damage = 15;
}