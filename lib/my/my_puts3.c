/*
** EPITECH PROJECT, 2020
** my_puts3.c
** File description:
** my_printf
*/

#include "myprintf.h"
#include <unistd.h>

void my_putchar_2(char c)
{
    c = '%';
    write(1, &c, 1);
}

int	my_put_nbr_base(int nb, char *base)
{
    int	res;
    int	ret;

    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    res = nb / my_strlen(base);
    ret = nb % my_strlen(base);
    if (res > 0)
        my_put_nbr_base(res, base);
    my_putchar(base[ret]);
    return (0);
}