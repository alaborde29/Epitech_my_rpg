/*
** EPITECH PROJECT, 2021
** fight_scene.c
** File description:
** fight scene
*/

#include "rpg.h"

void draw_fight(pokemon_t *pokemon, \
pokemon_t *opponent_pokemon, framebuffer_t *buffer, fight_t *fight)
{
    sfRenderWindow_drawSprite(buffer->window, pokemon->sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, opponent_pokemon->sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, fight->hp_sprite, NULL);
    sfRenderWindow_drawSprite(buffer->window, fight->opponent_hp_sprite, NULL);
    sfRenderWindow_drawText(buffer->window, fight->name, NULL);
    sfRenderWindow_drawText(buffer->window, fight->opponent_name, NULL);
    sfRenderWindow_drawText(buffer->window, fight->hp, NULL);
    sfRenderWindow_drawText(buffer->window, fight->opponent_hp, NULL);
    sfRenderWindow_drawText(buffer->window, fight->level, NULL);
    sfRenderWindow_drawText(buffer->window, fight->opponent_level, NULL);
}

void init_won(game_t *game, framebuffer_t *buffer, \
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

void display_end_fight(framebuffer_t *buffer, game_t *game)
{
    if (game->fight->win == true)
        display_text(buffer, game->fight->win_text);
    if (game->fight->loose == true)
        display_text(buffer, game->fight->loose_text);
}

void set_and_draw_all(framebuffer_t *buffer, game_t *game, \
scene_t *scene, int *current_scene)
{
    sfRenderWindow_drawSprite(buffer->window, \
scene[current_scene[0]].objs[0]->sprite, NULL);
    set_fighting_pokemon(game->player->pokemon[0], \
game->fight->opponent_pokemon);
    set_fighting_pokemon_text(game->player->pokemon[0], game->fight);
    draw_fight(game->player->pokemon[0], \
game->fight->opponent_pokemon, buffer, game->fight);
    sfRenderWindow_drawSprite(buffer->window, \
scene[current_scene[0]].objs[1]->sprite, NULL);
}

void fight_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    set_and_draw_all(buffer, game, scene, current_scene);
    if (game->fight->player_turn == false) {
        if (game->fight->win == false && game->fight->loose == false) {
            display_text(buffer, game->fight->wait);
            make_opponent_turn(game);
        }
        else
            display_end_fight(buffer, game);
    } else {
        make_our_turn(buffer, game, scene, current_scene[0]);
    }
    sfRenderWindow_display(buffer->window);
    game->fighting = true;
    if (game->player->pokemon[game->fight->fighting_pokemon]->hp <= 0) {
        init_won(game, buffer, current_scene, scene);
        game->fight->loose = true;
    }
    if (game->fight->opponent_pokemon->hp <= 0) {
        init_won(game, buffer, current_scene, scene);
        game->fight->win = true;
    }
}