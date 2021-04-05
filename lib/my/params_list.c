/*
** EPITECH PROJECT, 2020
** params__list.c
** File description:
** params_list
*/

#include <stdarg.h>
#include "myprintf.h"

void my_putchar_disp(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void my_put_nbr_disp2(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void my_put_nbr_disp(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void my_put_nbr_bin_disp(va_list ap)
{
    my_put_nbr_bin(va_arg(ap, int));
}

void my_put_nbr_hexa_disp(va_list ap)
{
    my_put_nbr_hexa(va_arg(ap, int));
}