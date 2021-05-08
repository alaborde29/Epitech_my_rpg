/*
** EPITECH PROJECT, 2021
** set_text.c
** File description:
** set text
*/

#include "rpg.h"

void clear_char(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        str[i] = '\0';
}

void set_text(pokemon_t *pokemon, attack_t *attack)
{
    char *attack_damage = malloc(sizeof(char) * 50);

    attack_damage[0] = '\0';
    my_strcat(attack_damage, "Damage: ");
    my_strcat(attack_damage, my_itoc(pokemon->first_damage));
    sfText_setString(attack->first_attack_damage, attack_damage);
    sfText_setPosition(attack->first_attack_damage, (sfVector2f){1020, 880});
    sfText_setString(attack->first_attack_name, pokemon->first_attack);
    sfText_setPosition(attack->first_attack_name, (sfVector2f){1020, 820});
    clear_char(attack_damage);
    my_strcat(attack_damage, "Damage: ");
    my_strcat(attack_damage, my_itoc(pokemon->second_damage));
    sfText_setString(attack->second_attack_name, pokemon->second_attack);
    sfText_setPosition(attack->second_attack_name, (sfVector2f){1470, 820});
    sfText_setString(attack->second_attack_damage, attack_damage);
    sfText_setPosition(attack->second_attack_damage, (sfVector2f){1470, 880});
    free(attack_damage);
}