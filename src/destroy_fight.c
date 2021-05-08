/*
** EPITECH PROJECT, 2021
** destroy_fight.c
** File description:
** destroy fight
*/

#include "rpg.h"

void destroy_text(fight_t *fight)
{
    sfText_destroy(fight->name);
    sfText_destroy(fight->opponent_name);
    sfText_destroy(fight->hp);
    sfText_destroy(fight->opponent_hp);
    sfText_destroy(fight->level);
    sfText_destroy(fight->opponent_level);
    sfText_destroy(fight->wait);
    sfText_destroy(fight->fight);
}

void destroy_attack(attack_t *attack)
{
    sfSprite_destroy(attack->first_rect);
    sfSprite_destroy(attack->second_rect);
    sfTexture_destroy(attack->rect_texture);
    sfText_destroy(attack->first_attack_name);
    sfText_destroy(attack->first_attack_damage);
    sfText_destroy(attack->second_attack_name);
    sfText_destroy(attack->second_attack_damage);
}

void destroy_fight(fight_t *fight)
{
    if (fight->opponent_pokemon->sprite != NULL)
        destroy_pokemon(fight->opponent_pokemon);
    sfFont_destroy(fight->font);
    destroy_text(fight);
    sfTexture_destroy(fight->hp_texture);
    sfSprite_destroy(fight->hp_sprite);
    sfSprite_destroy(fight->opponent_hp_sprite);
    if (fight->win_clock != NULL)
        sfClock_destroy(fight->win_clock);
    sfText_destroy(fight->win_text);
    sfText_destroy(fight->loose_text);
    destroy_attack(fight->attack);
    free(fight->attack);
    sfClock_destroy(fight->opponent->clock);
    free(fight->opponent);
}