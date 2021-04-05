/*
** EPITECH PROJECT, 2020
** my_str_isprintable.c
** File description:
** Desc
*/

int my_str_isprintable(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] > 31 && str[i] < 127)
            i += 1;
        else
            return (0);
    }
    return (1);
}