/*
** EPITECH PROJECT, 2020
** my_put_nbr.c
** File description:
** displays the number given as a parameter.
*/

void my_putchar(char c);

void my_limit(void)
{
    my_putchar('2');
    my_putchar('1');
    my_putchar('4');
    my_putchar('7');
    my_putchar('4');
    my_putchar('8');
    my_putchar('3');
    my_putchar('6');
    my_putchar('4');
    my_putchar('8');
}

int my_put_nbr(int nb)
{

    int number2 = 0;


    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    if (nb == -2147483648 || nb == 2147483648) {
        my_limit();
    } else {
        number2 = nb % 10;
        my_putchar(number2 + '0');
    }
    return (0);
}