/*
** EPITECH PROJECT, 2020
** my_str_isnum.c
** File description:
** Desc
*/

int my_str_isnum(char *str)
{
    int i = 0;

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= '0' && str[i] <= '9')
            i++;
        else
            return (0);
        if (str[i] == ' ')
            return (0);
        i++;
    }
    return (1);
}