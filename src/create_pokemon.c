/*
** EPITECH PROJECT, 2021
** create_pokemon.c
** File description:
** create pokemon
*/

#include "rpg.h"

void set_type(pokemon_t *pokemon, char *type)
{
    if (my_strcmp(type, "FIRE") == 0)
        pokemon->type = FIRE;
    if (my_strcmp(type, "WATER") == 0)
        pokemon->type = WATER;
    if (my_strcmp(type, "GRASS") == 0)
        pokemon->type = GRASS;
}

pokemon_t *create_pokemon(char *name, int hp, char *texture_path, char *type)
{
    pokemon_t *pokemon = malloc(sizeof(pokemon_t));

    pokemon->name = my_strdup(name);
    pokemon->sprite = sfSprite_create();
    pokemon->texture = sfTexture_createFromFile(texture_path, sfTrue);
    sfSprite_setTexture(pokemon->sprite, pokemon->texture, sfTrue);
    pokemon->level = 1;
    pokemon->hp = hp;
    set_type(pokemon, type);
    return (pokemon);
}