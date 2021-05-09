/*
** EPITECH PROJECT, 2021
** check_starter_click.c
** File description:
** check starter click
*/

#include "rpg.h"

void dup_pokemon(pokemon_t *initial_pokemon, pokemon_t *dest_pokemon)
{
    dest_pokemon->sprite = sfSprite_create();
    dest_pokemon->front_texture = \
sfTexture_copy(initial_pokemon->front_texture);
    dest_pokemon->back_texture = sfTexture_copy(initial_pokemon->back_texture);
    dest_pokemon->type = initial_pokemon->type;
    dest_pokemon->name = my_strdup(initial_pokemon->name);
    dest_pokemon->hp = initial_pokemon->hp;
    dest_pokemon->hp_max = initial_pokemon->hp_max;
    dest_pokemon->level = initial_pokemon->level;
    dest_pokemon->xp = initial_pokemon->xp;
    dest_pokemon->scale = initial_pokemon->scale;
    dest_pokemon->first_attack = my_strdup(initial_pokemon->first_attack);
    dest_pokemon->first_damage = initial_pokemon->first_damage;
    dest_pokemon->second_attack = my_strdup(initial_pokemon->second_attack);
    dest_pokemon->second_damage = initial_pokemon->second_damage;
}

void add_pokemon(starter_t *starter, player_t *player, int nb)
{
    dup_pokemon(starter->pokemon[nb], player->pokemon[0]);
    player->nb_pokemon = 1;
}

void check_starter_click(game_t *game, sfMouseButtonEvent mouse_event)
{
    if (mouse_event.x >= 280 && mouse_event.x <= 385 && \
mouse_event.y >= 470 && mouse_event.y <= 569) {
        add_pokemon(game->starter, game->player, 0);
        game->start = true;
    }
    if (mouse_event.x >= 930 && mouse_event.x <= 1044 && \
mouse_event.y >= 450 && mouse_event.y <= 567) {
        add_pokemon(game->starter, game->player, 1);
        game->start = true;
    }
    if (mouse_event.x >= 1550 && mouse_event.x <= 1664 && \
mouse_event.y >= 450 && mouse_event.y <= 576) {
        add_pokemon(game->starter, game->player, 2);
        game->start = true;
    }
}