/*
** EPITECH PROJECT, 2021
** fight_callback.c
** File description:
** fight callback
*/

#include "rpg.h"

void run_action(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    int nb = rand() % 2;

    if (nb == 1)
        switch_to_game(current_scene, scene, buffer, game);
    else {
        game->fight->player_turn = false;
        if (game->fight->opponent->clock != NULL)
        sfClock_restart(game->fight->opponent->clock);
    }
}

void attack_action(int *current_scene, scene_t *scene, \
framebuffer_t *buffer, game_t *game)
{
    game->fight->attack_choose = true;
    (*current_scene) = (*current_scene);
    sfRenderWindow_setView(buffer->window, buffer->initial_view);
    if (scene[current_scene[0]].music != NULL)
        sfMusic_setVolume(scene[current_scene[0]].music, 25);
}