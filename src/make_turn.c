/*
** EPITECH PROJECT, 2021
** make_turn.c
** File description:
** make turn
*/

#include "rpg.h"

void make_turn(game_t *game, framebuffer_t *buffer, \
scene_t *scene, int current_scene)
{
    if (game->fight->player_turn == false) {
        if (game->fight->win == false && game->fight->loose == false) {
            display_text(buffer, game->fight->wait);
            make_opponent_turn(game);
        }
        else
            display_end_fight(buffer, game);
    } else {
        make_our_turn(buffer, game, scene, current_scene);
    }
}