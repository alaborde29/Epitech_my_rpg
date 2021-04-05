/*
** EPITECH PROJECT, 2020
** params__list.c
** File description:
** params_list
*/

#include <stdarg.h>
#include "myprintf.h"

void my_putstr_disp2(va_list ap)
{
    my_putstr2(va_arg(ap, char *));
}

void my_put_nbr_octal_disp(va_list ap)
{
    my_put_nbr_octal(va_arg(ap, int));
}

void my_put_nbr_octal_disp2(va_list ap)
{
    my_put_nbr_octal2(va_arg(ap, int));
}

void my_put_nbr_hexa_disp2(va_list ap)
{
    my_put_nbr_hexa2(va_arg(ap, int));
}

void my_putstr_disp(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}