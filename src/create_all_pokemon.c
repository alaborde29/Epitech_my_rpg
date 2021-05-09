/*
** EPITECH PROJECT, 2021
** create_all_pokemon.c
** File description:
** create all pokemon
*/

#include "rpg.h"
#include "pokemon.h"

void init_first_pokemon_part(pokemon_t **pokemon, starter_t *starter)
{
    dup_pokemon(starter->pokemon[0], pokemon[0]);
    dup_pokemon(starter->pokemon[1], pokemon[1]);
    dup_pokemon(starter->pokemon[2], pokemon[2]);
    init_pidgey(pokemon[3]);
    init_diglett(pokemon[4]);
    init_dragonite(pokemon[5]);
    init_gloom(pokemon[6]);
    init_moltres(pokemon[7]);
    init_onix(pokemon[8]);
    init_pikachu(pokemon[9]);
    init_aerodactyl(pokemon[10]);
    init_tauros(pokemon[11]);
    init_exeggutor(pokemon[12]);
    init_golbat(pokemon[13]);
    init_jynx(pokemon[14]);
    init_kabutops(pokemon[15]);
}

void init_second_pokemon_part(pokemon_t **pokemon)
{
    init_machop(pokemon[16]);
    init_meowth(pokemon[17]);
    init_mewtwo(pokemon[18]);
    init_umbreon(pokemon[19]);
    init_zapdos(pokemon[20]);
    init_rapidash(pokemon[21]);
    init_ninetales(pokemon[22]);
    init_gengar(pokemon[23]);
    init_electabuzz(pokemon[24]);
    init_primeape(pokemon[25]);
    init_golduck(pokemon[26]);
    init_growlithe(pokemon[27]);
    init_houndoom(pokemon[28]);
    init_feraligatr(pokemon[29]);
}

pokemon_t **create_all_pokemon(int nb_pokemons, starter_t *starter)
{
    pokemon_t **pokemon = malloc(sizeof(pokemon_t *) * (nb_pokemons + 1));

    for (int i = 0; i < nb_pokemons; i++)
        pokemon[i] = malloc(sizeof(pokemon_t));
    pokemon[nb_pokemons] = NULL;
    init_first_pokemon_part(pokemon, starter);
    init_second_pokemon_part(pokemon);
    return (pokemon);
}