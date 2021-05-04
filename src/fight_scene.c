/*
** EPITECH PROJECT, 2021
** fight_scene.c
** File description:
** fight scene
*/

#include "rpg.h"

void display_text(framebuffer_t *buffer, sfText *text)
{
    sfRenderWindow_drawText(buffer->window, text, NULL);
}

void display_button(framebuffer_t *buffer, button_t **buttons)
{
    for (int i = 0; buttons[i]; i++) {
        sfRenderWindow_drawRectangleShape(buffer->window, \
buttons[i]->rect, NULL);
    }
}

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

void fight_scene(scene_t *scene, framebuffer_t *buffer, \
game_t *game, int *current_scene)
{
    sfRenderWindow_clear(buffer->window, sfBlack);
    check_button_state(buffer, scene, current_scene[0]);
    sfRenderWindow_drawSprite(buffer->window, \
scene[current_scene[0]].objs[0]->sprite, NULL);
    set_fighting_pokemon(game->player->pokemon[0], \
game->player->pokemon[1]);
    set_fighting_pokemon_text(game->player->pokemon[0], \
game->player->pokemon[1], game->fight);
    draw_fight(game->player->pokemon[0], \
game->player->pokemon[1], buffer, game->fight);
    sfRenderWindow_drawSprite(buffer->window, \
scene[current_scene[0]].objs[1]->sprite, NULL);
    if (game->fight->player_turn == false) {
        display_text(buffer, game->fight->wait);
    } else {
        display_text(buffer, game->fight->fight);
        display_button(buffer, scene[current_scene[0]].buttons);
    }
    sfRenderWindow_display(buffer->window);
}