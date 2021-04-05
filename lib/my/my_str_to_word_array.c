/*
** EPITECH PROJECT, 2020
** my_str_to_word_array.c
** File description:
** Desc
*/

#include <unistd.h>
#include <stdlib.h>

int my_alphanum(char c)
{
    if (c > '0' && c <= '9')
        return (1);
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}

int nb_words(char *str)
{
    int i = 0;
    int words = 0;

    while (str[i] != '\0'){
        if (my_alphanum(str[i]) == 1)
            words++;
        while (my_alphanum(str[i]) == 1 && str[i] != '\0')
            i++;
        if (str[i] != '\0')
            i++;
    }
    return (words);
}

int my_wordlen(char *str, int i)
{
    int wlen = 0;

    while (my_alphanum(str[i]) == 1) {
        i++;
        wlen++;
    }
    return (wlen);
}

char **my_str_to_word_array(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char **tab = malloc(sizeof(char *) * (nb_words(str) + 1));

    while (i != nb_words(str)) {
        k = 0;
        while (my_alphanum(str[j]) == 0)
            j++;
        tab[i] = malloc(sizeof(char) * (my_wordlen(str, j) + 1));
        while (my_alphanum(str[j]) == 1){
            tab[i][k] = str[j];
            k++;
            j++;
        }
        tab[i][k] = '\0';
        i++;
    }
    tab[i] = NULL;
    return (tab);
}