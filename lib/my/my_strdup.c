/*
** EPITECH PROJECT, 2020
** my_strdup.c
** File description:
** Desc
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strdup(char const *src)
{
    int i = 0;
    char *src2 = malloc(sizeof(char) * my_strlen(src) + 1);

    while (src[i] != '\0'){
        src2[i] = src[i];
        i++;
    }
    src2[i] = '\0';
    return (src2);
}