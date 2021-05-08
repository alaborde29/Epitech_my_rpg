/*
** EPITECH PROJECT, 2021
** create_all_pokemon.c
** File description:
** create all pokemon
*/

#include "rpg.h"

pokemon_t **create_all_pokemon(int nb_pokemons, starter_t *starter)
{
    pokemon_t **pokemon = malloc(sizeof(pokemon_t *) * (nb_pokemons + 1));

    for (int i = 0; i < nb_pokemons; i++)
        pokemon[i] = malloc(sizeof(pokemon_t));
    pokemon[nb_pokemons] = NULL;
    dup_pokemon(starter->pokemon[0], pokemon[0]);
    dup_pokemon(starter->pokemon[1], pokemon[1]);
    dup_pokemon(starter->pokemon[2], pokemon[2]);
    return (pokemon);
}