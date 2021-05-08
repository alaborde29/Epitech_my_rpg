/*
** EPITECH PROJECT, 2021
** make_our_turn.c
** File description:
** make our turn
*/

#include <sys/wait.h>
#include "rpg.h"

void display_attack(framebuffer_t *buffer, fight_t *fight)
{
    sfRenderWindow_drawSprite(buffer->window, fight->attack->first_rect, NULL);
    sfRenderWindow_drawSprite(buffer->window, fight->attack->second_rect, NULL);
    sfRenderWindow_drawText(buffer->window, \
fight->attack->first_attack_name, NULL);
    sfRenderWindow_drawText(buffer->window, \
fight->attack->first_attack_damage, NULL);
    sfRenderWindow_drawText(buffer->window, \
fight->attack->second_attack_name, NULL);
    sfRenderWindow_drawText(buffer->window, \
fight->attack->second_attack_damage, NULL);
}

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

void set_attack(pokemon_t *pokemon, fight_t *fight)
{
    sfSprite_setPosition(fight->attack->first_rect, (sfVector2f){1400, 770});
    sfSprite_setScale(fight->attack->first_rect, (sfVector2f){1.3, 1.3});
    sfSprite_setPosition(fight->attack->second_rect, (sfVector2f){950, 770});
    sfSprite_setScale(fight->attack->second_rect, (sfVector2f){1.3, 1.3});
    set_text(pokemon, fight->attack);
}

void make_our_turn(framebuffer_t *buffer, game_t *game, \
scene_t *scene, int current_scene)
{
    if (game->fight->win == false && game->fight->loose == false)
        display_text(buffer, game->fight->fight);
    else
        display_end_fight(buffer, game);
    if (game->fight->attack_choose == true) {
        set_attack(game->player->pokemon[game->fight->fighting_pokemon], \
game->fight);
        display_attack(buffer, game->fight);
        if (game->fight->attack->first == true) {
            game->fight->opponent_pokemon->hp -= \
game->player->pokemon[game->fight->fighting_pokemon]->first_damage;
            game->fight->attack->first = false;
            game->fight->player_turn = false;
            if (game->fight->opponent->clock != NULL)
                sfClock_restart(game->fight->opponent->clock);
        } else if (game->fight->attack->second == true) {
            game->fight->opponent_pokemon->hp -= \
game->player->pokemon[game->fight->fighting_pokemon]->second_damage;
            game->fight->attack->second = false;
            game->fight->player_turn = false;
            if (game->fight->opponent->clock != NULL)
                sfClock_restart(game->fight->opponent->clock);
        }
    } else
        display_button(buffer, scene[current_scene].buttons);
}