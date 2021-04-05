/*
** EPITECH PROJECT, 2020
** my_compute_square_root.c
** File description:
** Desc
*/

void my_putchar(char c);

int my_compute_square_root(int nb)
{
    int i = 0;

    if (nb < 0) {
        return (0);
    }
    while (i * i != nb) {
        if (i > nb) {
            return (0);
        }
        i = i + 1;
    }
    return (i);
}