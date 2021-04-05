/*
** EPITECH PROJECT, 2020
** my_printf.c
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include "myprintf.h"

t_param f_print[] =
{
    {'c', &my_putchar_disp},
    {'d', &my_put_nbr_disp},
    {'i', &my_put_nbr_disp2},
    {'x', &my_put_nbr_hexa_disp2},
    {'X', &my_put_nbr_hexa_disp},
    {'s', &my_putstr_disp},
    {'S', &my_putstr_disp2},
    {'b', &my_put_nbr_bin_disp},
    {'o', &my_put_nbr_octal_disp},
    {'p', &my_put_pointer},
    {'u', &my_put_unsigned_nbr_disp},
    {'%', &my_put_pourcent},
};

void flags(const char *str, int c, va_list ap)
{
    int i = 0;
    int j = 12;

    while ((i < j) && (f_print[i].param != str[c]))
        i++;
    if (i == j) {
        my_putchar('%');
        my_putchar(str[c]);
    } else {
        f_print[i].func(ap);
    }
}

int my_printf(char const *str, ...)
{
    va_list ap;
    int i = 0;

    va_start(ap, str);
    if (str == 0)
        return (84);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            if (str[i] == ' ') {
                my_putchar(' ');
                i++;
            }
            flags(str, i, ap);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(ap);
    return (0);
}