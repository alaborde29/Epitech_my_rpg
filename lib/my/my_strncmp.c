/*
** EPITECH PROJECT, 2020
** my_strncmp.c
** File description:
** Desc
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    while (*s1 && n > 0) {
        if (*s1 < *s2)
            return (-1);
        else if (*s1 > *s2)
            return (1);
        s1 += 1;
        s2 += 1;
        n--;
    }
    if (n == 0 || (*s1 == '\0' && *s2 == '\0'))
        return (0);
    else
        return (-1);
}