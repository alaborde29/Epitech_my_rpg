/*
** EPITECH PROJECT, 2020
** my_itoc.c
** File description:
** Int to char
*/

#include "rpg.h"

char *my_itoc(int number)
{
    int len = 0;
    int negative = 0;
    if (number == 0)
        len++;
    for (int i = number; i != 0; i = i / 10, len++);
    if (number < 0) {
        len++;
        negative = 1;
        number = number * -1;
    }
    char *c = malloc(sizeof(char) * len + 1);
    c[len] = '\0';
    len--;
    for (; len >= 0; len--) {
        c[len] = number % 10 + 48;
        number = number / 10;
    }
    if (negative)
        c[0] = '-';
    return (c);
}