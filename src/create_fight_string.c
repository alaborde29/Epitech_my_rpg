/*
** EPITECH PROJECT, 2021
** create_fight_string.c
** File description:
** create fight string
*/

#include "rpg.h"

char *create_hp_string(int hp, int hp_max)
{
    char *hp_str = malloc(sizeof(char) * 25);

    hp_str[0] = '\0';
    my_strcat(hp_str, my_itoc(hp));
    my_strcat(hp_str, "/");
    my_strcat(hp_str, my_itoc(hp_max));
    return (hp_str);
}

char *create_level_string(int level)
{
    char * level_str = malloc(sizeof(char) * 25);

    level_str[0] = '\0';
    my_strcat(level_str, "Level: ");
    my_strcat(level_str, my_itoc(level));
    return (level_str);
}
