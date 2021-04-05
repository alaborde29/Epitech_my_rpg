/*
** EPITECH PROJECT, 2020
** my_strncpy.c
** File description:
** copy n characters into another string
*/

void my_putchar(char c);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    for (i = 0; n != 0; i++) {
        dest[i] = src[i];
        n--;
    }
    return (dest);
}