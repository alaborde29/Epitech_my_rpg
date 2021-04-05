/*
** EPITECH PROJECT, 2020
** params__list.c
** File description:
** params_list
*/

#include <stdarg.h>
#include "myprintf.h"

void my_put_pointer(va_list ap)
{
    my_putstr("0x");
    my_put_nbr_hexa2(va_arg(ap, long long));
}

void my_put_unsigned_nbr_disp(va_list ap)
{
    my_put_unsigned_nbr(va_arg(ap, int));
}

void my_put_pourcent(va_list ap)
{
    my_putchar_2(va_arg(ap, int));
}