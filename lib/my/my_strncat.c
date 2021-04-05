/*
** EPITECH PROJECT, 2020
** my_strncat.c
** File description:
** Descs
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = my_strlen(dest);

    while (src[i] != '\0' && i < nb){
        dest[j] = src[i];
        i++;
        j++;
    }
    dest[j] = '\0';
    return (dest);
}