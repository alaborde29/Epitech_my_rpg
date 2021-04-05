/*
** EPITECH PROJECT, 2020
** my_revstr.c
** File description:
** Reverse a string
*/

#include "my.h"

char *my_revstr(char *str)
{
    int i = 0;
    int j = 0;
    int len = my_strlen(str);
    char *rstr = malloc(sizeof(char) * len + 1);

    for (i = len - 1; i >= 0; i--) {
        rstr[j] = str[i];
        j++;
    }
    return (rstr);
}