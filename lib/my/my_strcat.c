/*
** EPITECH PROJECT, 2020
** my_strcat.c
** File description:
** Desc
*/

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0'){
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}