/*
** EPITECH PROJECT, 2020
** my_show_word_array.c
** File description:
** Desc
*/

#include <stdlib.h>
#include <unistd.h>

void my_putchar(char c);

int my_putstr(char const *str);

int my_show_word_array(char * const *tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        my_putstr(tab[i]);
        my_putchar('\n');
        i++;
    }
    return (0);
}