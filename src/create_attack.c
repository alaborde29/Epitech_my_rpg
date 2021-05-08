/*
** EPITECH PROJECT, 2021
** create_attack.c
** File description:
** create attack
*/

#include "rpg.h"

attack_t *create_attack(sfFont *font)
{
    attack_t *attack = malloc(sizeof(attack_t));

    attack->first_rect = sfSprite_create();
    attack->second_rect = sfSprite_create();
    attack->rect_texture = \
sfTexture_createFromFile("assets/attack_rect.png", NULL);
    sfSprite_setTexture(attack->first_rect, attack->rect_texture, sfTrue);
    sfSprite_setTexture(attack->second_rect, attack->rect_texture, sfTrue);
    attack->first_attack_name = create_text((sfVector2f){0, 0}, \
NULL, font, sfBlack);
    attack->first_attack_damage = create_text((sfVector2f){0, 0}, \
NULL, font, sfBlack);
    attack->second_attack_name = create_text((sfVector2f){0, 0}, \
NULL, font, sfBlack);
    attack->second_attack_damage = create_text((sfVector2f){0, 0}, \
NULL, font, sfBlack);
    return (attack);
}