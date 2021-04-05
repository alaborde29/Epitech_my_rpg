/*
** EPITECH PROJECT, 2020
** my_str_isupper.c
** File description:
** Desc
*/

int my_str_isupper(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'A' && str[i] <= 'Z')
            i += 1;
        else
            return (0);
    }
    return (1);
}