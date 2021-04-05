/*
** EPITECH PROJECT, 2020
** my_puts.c
** File description:
** my_printf
*/

#include "myprintf.h"

void my_put_nbr_bin(int nb)
{
    int res = 0;


    if (nb >= 2) {
        res = nb % 2;
        nb = nb / 2;
        my_put_nbr_bin(nb);
    } else if (nb > 0) {
        res = nb % 2;
        nb = nb / 2;
    }
    my_putchar(res + 48);
}

void my_put_nbr_hexa(int nb)
{
    int i = 0;
    int ret = 0;
    char arr[500];

    while (nb != 0) {
        ret = nb % 16;
        if (ret < 10) {
            arr[i] = ret + 48;
            i++;
        } else {
            arr[i] = ret + 55;
            i++;
        }
        nb = nb / 16;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
}

void my_put_nbr_hexa2(long long nb)
{
    long long i = 0;
    long long ret = 0;
    char arr[500];

    while (nb != 0) {
        ret = nb % 16;
        if (ret < 10) {
            arr[i] = ret + 48;
            i++;
        } else {
            arr[i] = ret + 87;
            i++;
        }
        nb = nb / 16;
    }
    for (long long j = i - 1; j >= 0; j--) {
        my_putchar(arr[j]);
    }
}

void my_put_nbr_octal(int nb)
{
    int i = 0;
    int arr[500];

    while (nb != 0) {
        arr[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(arr[j]);
    }
}

void my_put_nbr_octal2(int nb)
{
    int i = 0;
    int arr[500];

    if (nb <= 7 && nb >= 0) {
        my_putchar('0');
        my_putchar('0');
    } else if (nb >= 7 && nb <= 77) {
        my_putchar('0');
    }
    while (nb != 0) {
        arr[i] = nb % 8;
        nb = nb / 8;
        i++;
    }
    for (int j = i - 1; j >= 0; j--) {
        my_put_nbr(arr[j]);
    }
}