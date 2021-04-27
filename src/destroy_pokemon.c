/*
** EPITECH PROJECT, 2021
** destroy_pokemon.c
** File description:
** destroy pokemon
*/

#include "rpg.h"

void destroy_pokemon(pokemon_t *pokemon)
{
    free(pokemon->name);
    free(pokemon->first_attack);
    free(pokemon->second_attack);
    sfSprite_destroy(pokemon->sprite);
    sfTexture_destroy(pokemon->front_texture);
    sfTexture_destroy(pokemon->back_texture);
}