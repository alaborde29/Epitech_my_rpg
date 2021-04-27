/*
** EPITECH PROJECT, 2021
** init_player.c
** File description:
** init player
*/

#include "rpg.h"

player_t *create_player(void)
{
    player_t *player = malloc(sizeof(player_t));

    player->pokemon = malloc(sizeof(pokemon_t *) * 7);
    if (player->pokemon == NULL)
        return (NULL);
    for (int i = 0; i < 7; i++) {
        player->pokemon[i] = malloc(sizeof(pokemon_t));
        if (player->pokemon[i] == NULL)
            return (NULL);
    }
    player->position.x = 1920 / 2 - 20;
    player->position.y = 1080 / 2 - 31;
    player->nb_pokemon = 0;
    return (player);
}

void destroy_player(player_t *player)
{
    for (int i = 0; i < 7; i++) {
        if (i < player->nb_pokemon)
            destroy_pokemon(player->pokemon[i]);
        free(player->pokemon[i]);
    }
    free(player->pokemon);
    free(player);
}