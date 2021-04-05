/*
** EPITECH PROJECT, 2020
** my_find_prime_sup.c
** File description:
** Desc
*/

void my_putchar(char c);

int my_is_prime_alt(int nb)
{
    int i;

    if (nb < 2) {
        return (0);
    }
    else if (nb == 2) {
        return (1);
    }
    else if (nb % 2 == 0){
        return (0);
    } else {
        i = 3;
        while (i * i <= nb) {
            if (nb % i == 0) {
                return (0);
            }
            i++;
        }
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_is_prime_alt(nb) != 1)
        nb = nb + 1;
    return (nb);
}