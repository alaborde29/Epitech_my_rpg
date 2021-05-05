/*
** EPITECH PROJECT, 2021
** create_fight.c
** File description:
** create fight
*/

#include "rpg.h"

void set_font(fight_t *fight)
{
    sfText_setFont(fight->name, fight->font);
    sfText_setFont(fight->opponent_name, fight->font);
    sfText_setFont(fight->hp, fight->font);
    sfText_setFont(fight->opponent_hp, fight->font);
    sfText_setFont(fight->level, fight->font);
    sfText_setFont(fight->opponent_level, fight->font);
    sfText_setFont(fight->wait, fight->font);
    sfText_setFont(fight->fight, fight->font);
}

void set_color(fight_t *fight)
{
    sfText_setColor(fight->name, sfBlack);
    sfText_setColor(fight->opponent_name, sfBlack);
    sfText_setColor(fight->hp, sfBlack);
    sfText_setColor(fight->opponent_hp, sfBlack);
    sfText_setColor(fight->level, sfBlack);
    sfText_setColor(fight->opponent_level, sfBlack);
    sfText_setColor(fight->wait, sfWhite);
    sfText_setColor(fight->fight, sfWhite);
}

void init_sprite(fight_t *fight)
{
    fight->hp_texture = sfTexture_createFromFile("assets/hp.png", NULL);
    fight->hp_sprite = sfSprite_create();
    fight->opponent_hp_sprite = sfSprite_create();
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
    fight->opponent_pokemon = malloc(sizeof(pokemon_t));
    fight->font = sfFont_createFromFile("assets/godzilla.ttf");
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
    fight->player_turn = true;
    return (fight);
}

void destroy_fight(fight_t *fight)
{
    sfFont_destroy(fight->font);
    sfText_destroy(fight->name);
    sfText_destroy(fight->opponent_name);
    sfText_destroy(fight->hp);
    sfText_destroy(fight->opponent_hp);
    sfText_destroy(fight->level);
    sfText_destroy(fight->opponent_level);
    sfText_destroy(fight->wait);
    sfTexture_destroy(fight->hp_texture);
    sfSprite_destroy(fight->hp_sprite);
    sfSprite_destroy(fight->opponent_hp_sprite);
}