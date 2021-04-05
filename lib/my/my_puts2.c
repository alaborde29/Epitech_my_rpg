/*
** EPITECH PROJECT, 2020
** my_puts2.c
** File description:
** my_printf
*/

#include "myprintf.h"
#include <unistd.h>

void my_put_unsigned_nbr(unsigned int nb)
{
    unsigned int nbr;

    if (nb >= 10) {
        nbr = nb % 10;
        nb = nb / 10;
        my_put_unsigned_nbr(nb);
        my_putchar(nbr + 48);
    } else {
        my_putchar(nb + 48);
    }
}

int my_putstr2(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            my_put_nbr_octal2((int) str[i]);
            i++;
        } else {
            my_putchar(str[i]);
            i++;
        }
    }
    return (0);
}