/*
** EPITECH PROJECT, 2021
** create_pokemon.c
** File description:
** create pokemon
*/

#include "rpg.h"

pokemon_t *create_pokemon(char *name, int hp, \
char *front_texture, char *back_texture)
{
    pokemon_t *pokemon = malloc(sizeof(pokemon_t));

    pokemon->name = my_strdup(name);
    pokemon->sprite = sfSprite_create();
    pokemon->front_texture = sfTexture_createFromFile(front_texture, sfTrue);
    pokemon->back_texture = sfTexture_createFromFile(back_texture, sfTrue);
    sfSprite_setTexture(pokemon->sprite, pokemon->front_texture, sfTrue);
    pokemon->level = 1;
    pokemon->hp = hp;
    return (pokemon);
}