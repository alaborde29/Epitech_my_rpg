/*
** EPITECH PROJECT, 2020
** my_putstr.c
** File description:
** displays, one-by-one, the characters of a string.
*/

#include "my.h"

int my_putstr(const char *str)
{
    int i = 0;

    if (str == 0) {
        my_putstr("(null)");
        return (0);
    }
    while (str[i]) {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}