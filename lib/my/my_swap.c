/*
** EPITECH PROJECT, 2020
** my_swap.c
** File description:
** swap two numbers
*/

void my_putchar(char c);

void my_swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}