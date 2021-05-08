/*
** EPITECH PROJECT, 2021
** pick_random_pokemon.c
** File description:
** pick random pokemon
*/

#include "rpg.h"

int pick_random_pokemon(int nb_pokemons)
{
    int nb = rand() % nb_pokemons;

    return (nb);
}