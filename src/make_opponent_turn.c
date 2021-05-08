/*
** EPITECH PROJECT, 2021
** make_opponent_turn.c
** File description:
** make opponent turn
*/

#include "rpg.h"

void make_opponent_turn(game_t *game)
{
    int nb = 0;

    if (game->fight->opponent->clock == NULL)
        game->fight->opponent->clock = sfClock_create();
    game->fight->opponent->time = \
sfClock_getElapsedTime(game->fight->opponent->clock);
    game->fight->second = game->fight->opponent->time.microseconds / 1000000.0;
    if (game->fight->second > 2.0) {
        nb = rand() % 2;
        if (nb == 1)
            game->player->pokemon[game->fight->fighting_pokemon]->hp -= \
game->fight->opponent_pokemon->first_damage;
        else
            game->player->pokemon[game->fight->fighting_pokemon]->hp -= \
game->fight->opponent_pokemon->second_damage;
        game->fight->player_turn = true;
        game->fight->attack_choose = false;
        sfClock_restart(game->fight->opponent->clock);
    }
}