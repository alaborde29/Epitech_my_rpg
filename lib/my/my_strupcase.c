/*
** EPITECH PROJECT, 2020
** my_strupcase.c
** File description:
** Desc
*/

void my_putchar(char c);

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (str[i] >= 97 && str[i] <= 122){
            str[i] = str[i] - 32;
        }
        i++;
    }
    return (str);
}