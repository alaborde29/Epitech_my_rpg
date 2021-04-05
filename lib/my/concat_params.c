/*
** EPITECH PROJECT, 2020
** concat_params.c
** File description:
** Desc
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src);

char *concat_params(int argc, char **argv)
{
    char *dest;
    int i = 0;
    int len;

    while (i < argc) {
        len = my_strlen(argv[i]);
        dest = malloc(sizeof(char) * len);
        while (i < argc) {
            my_strcat(dest, argv[i]);
            if (i < argc - 1) {
                my_strcat(dest, "\n");
            }
            i++;
        }
    }
    return (dest);
}