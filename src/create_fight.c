/*
** EPITECH PROJECT, 2021
** create_fight.c
** File description:
** create fight
*/

#include "rpg.h"

void create_all_text(fight_t *fight)
{
    fight->name = create_text((sfVector2f){0, 0}, NULL, fight->font, sfBlack);
    fight->opponent_name = create_text((sfVector2f){0, 0}, \
NULL, fight->font, sfBlack);
    fight->hp = create_text((sfVector2f){0, 0}, NULL, fight->font, sfBlack);
    fight->opponent_hp = create_text((sfVector2f){0, 0}, \
NULL, fight->font, sfBlack);
    fight->level = create_text((sfVector2f){0, 0}, NULL, fight->font, sfBlack);
    fight->opponent_level = create_text((sfVector2f){0, 0}, \
NULL, fight->font, sfBlack);
    fight->wait = create_text((sfVector2f){75, 775}, \
"Waiting opponent turn...", fight->font, sfWhite);
    fight->fight = create_text((sfVector2f){75, 775}, \
"What do you want to do ?", fight->font, sfWhite);
    fight->win_text = create_text((sfVector2f){75, 775}, \
"You win !", fight->font, sfWhite);
    fight->loose_text = create_text((sfVector2f){75, 775}, \
"Oh no, you loose !", fight->font, sfWhite);
}

void init_sprite(fight_t *fight)
{
    fight->font = sfFont_createFromFile("assets/godzilla.ttf");
    fight->hp_texture = sfTexture_createFromFile("assets/hp.png", NULL);
    fight->hp_sprite = sfSprite_create();
    fight->opponent_hp_sprite = sfSprite_create();
    fight->fighting_pokemon = 0;
    fight->win_clock = sfClock_create();
    sfSprite_setTexture(fight->hp_sprite, fight->hp_texture, sfTrue);
    sfSprite_setTexture(fight->opponent_hp_sprite, fight->hp_texture, sfTrue);
    sfSprite_setScale(fight->hp_sprite, (sfVector2f){0.1, 0.1});
    sfSprite_setScale(fight->opponent_hp_sprite, (sfVector2f){0.1, 0.1});
    sfSprite_setPosition(fight->hp_sprite, (sfVector2f){1230, 640});
    sfSprite_setPosition(fight->opponent_hp_sprite, (sfVector2f){240, 220});
}

fight_t *create_fight(void)
{
    fight_t *fight = malloc(sizeof(fight_t));

    init_sprite(fight);
    fight->attack = create_attack(fight->font);
    fight->opponent_pokemon = malloc(sizeof(pokemon_t));
    fight->opponent_pokemon->sprite = NULL;
    fight->opponent = malloc(sizeof(opponent_t));
    create_all_text(fight);
    fight->fighting_pokemon = 0;
    fight->win_clock = NULL;
    fight->opponent->clock = NULL;
    fight->player_turn = true;
    fight->win = false;
    fight->loose = false;
    return (fight);
}