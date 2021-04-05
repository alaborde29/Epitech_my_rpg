/*
** EPITECH PROJECT, 2020
** my_str_isalpha
** File description:
** Desc
*/

int my_str_isalpha(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 97))
            i += 1;
        else
            return (0);
    }
    return (1);
}