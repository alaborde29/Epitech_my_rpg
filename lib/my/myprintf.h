/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.H
*/

#include <stdarg.h>

typedef struct s_param
{
    char param;
    void (*func)(va_list);
}t_param;

void flags(const char *str, int c, va_list ap);
void my_putchar_disp(va_list ap);
void my_put_nbr_disp(va_list ap);
void my_put_nbr_disp2(va_list ap);
void my_put_nbr_bin_disp(va_list ap);
void my_put_nbr_hexa_disp(va_list ap);
void my_putstr_disp2(va_list ap);
void my_put_nbr_octal_disp(va_list ap);
void my_put_nbr_octal_disp2(va_list ap);
void my_put_nbr_hexa_disp2(va_list ap);
void my_putstr_disp(va_list ap);
void my_put_pointer(va_list ap);
void my_put_pourcent(va_list ap);
void my_put_unsigned_nbr_disp(va_list ap);
void my_put_nbr_bin(int nb);
void my_put_nbr_hexa(int nb);
void my_put_nbr_hexa2(long long nb);
void my_put_nbr_octal(int nb);
void my_put_nbr_octal2(int nb);
void my_put_unsigned_nbr(unsigned int nb);
void my_putchar_2(char c);
int my_put_nbr_base(int nb, char *base);
int my_putstr2(char *str);
int my_printf(char const *str, ...);
void my_putchar(char c);
int my_putstr(const char *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);