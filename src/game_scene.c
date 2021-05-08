/*
** EPITECH PROJECT, 2021
** game_scene.c
** File description:
** game scene
*/

#include "rpg.h"

void reset_pokemon_player(player_t *player)
{
    for (int i = 0; i < player->nb_pokemon; i++) {
        player->pokemon[i]->hp = player->pokemon[i]->hp_max;
    }
}

void do_for_all_poke(pokemon_t **pokemon)
{
    for (int i = 0; pokemon[i]; i++) {
        pokemon[i]->level += 1;
        pokemon[i]->xp = 0;
        pokemon[i]->first_damage += 1;
        pokemon[i]->second_damage += 1;
        pokemon[i]->hp_max += 5;
        pokemon[i]->hp = pokemon[i]->hp_max;
    }
}

void check_xp_pokemon(game_t *game)
{
    if (game->player->pokemon[game->fight->fighting_pokemon]->xp == 100) {
        game->player->pokemon[game->fight->fighting_pokemon]->level += 1;
        game->player->pokemon[game->fight->fighting_pokemon]->xp = 0;
        game->player->pokemon[game->fight->fighting_pokemon]->first_damage += 1;
        game->player->pokemon[game->fight->fighting_pokemon]->\
second_damage += 1;
        game->player->pokemon[game->fight->fighting_pokemon]->hp_max += 5;
        do_for_all_poke(game->pokemon);
    }
}

void reset_fight(game_t *game)
{
    game->fighting = false;
    game->fight->win = false;
    game->fight->loose = false;
    game->fight->player_turn = true;
    game->fight->attack_choose = false;
    game->fight->attack->first = false;
    game->fight->attack->second = false;
    sfClock_destroy(game->fight->win_clock);
    game->fight->win_clock = NULL;
    game->fight->fighting_pokemon = 0;
    game->fight->opponent_pokemon->sprite = NULL;
    check_xp_pokemon(game);
    reset_pokemon_player(game->player);
}

void game_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene)
{
    if (game->start == false) {
        sfRenderWindow_setView(buffer->window, buffer->initial_view);
        starter_choice(game, buffer);
    }
    else {
        if (game->fighting == true) {
            destroy_pokemon(game->fight->opponent_pokemon);
            reset_fight(game);
        }
        sfRenderWindow_setView(buffer->window, buffer->view);
        sfRenderWindow_clear(buffer->window, sfBlack);
        check_button_state(buffer, scene, current_scene[0]);
        draw_scene(buffer, scene, current_scene[0]);
        sfRenderWindow_display(buffer->window);
    }
}