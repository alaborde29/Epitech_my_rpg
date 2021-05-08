/*
** EPITECH PROJECT, 2021
** init_end_turn.c
** File description:
** init end turn
*/

#include "rpg.h"

void init_won(game_t *game, framebuffer_t *buffer, \
int *current_scene, scene_t *scene)
{
    if (game->fight->win_clock == NULL)
        game->fight->win_clock = sfClock_create();
    game->fight->win_time = sfClock_getElapsedTime(game->fight->win_clock);
    game->fight->second = game->fight->win_time.microseconds / 1000000.0;
    if (game->fight->second > 2.0) {
        game->player->pokemon[game->fight->fighting_pokemon]->xp += 100;
        switch_to_game(current_scene, scene, buffer, game);
    }
}

void init_loose(game_t *game, framebuffer_t *buffer, \
int *current_scene, scene_t *scene)
{
    if (game->fight->win_clock == NULL)
        game->fight->win_clock = sfClock_create();
    game->fight->win_time = sfClock_getElapsedTime(game->fight->win_clock);
    game->fight->second = game->fight->win_time.microseconds / 1000000.0;
    if (game->fight->second > 2.0) {
        switch_to_game(current_scene, scene, buffer, game);
    }
}