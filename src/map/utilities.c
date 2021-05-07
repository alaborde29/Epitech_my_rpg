/*
** EPITECH PROJECT, 2021
** B-MUL-200-NAN-2-1-myrpg-henri.chauvet
** File description:
** utilities
*/

#include "my.h"
#include "rpg.h"

char *read_file(char *path, char *buffer)
{
    struct stat file_info;
    int st_return = stat(path, &file_info);
    int fd = open(path, O_RDONLY);
    buffer = malloc(sizeof(char) * file_info.st_size);
    int rd_return = read(fd, buffer, file_info.st_size);

    if (st_return || fd == -1 || rd_return == -1)
        return (0);
    else
        return (buffer);
}

int count_str_lines(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] == '\n')
            n++;
        i++;
    }
    return (n);
}

int linelen_from_n_line(char *str, int line)
{
    int i = 0;
    int n = 0;

    while (n != line || str[i] != '\0') {
        if (str[i] == '\n')
            n++;
        i++;
    }
    if (str[i] == '\0')
        return (1);
    i++;
    n = 0;
    while (str[i] != '\n' || str[i] != '\0') {
        n++;
        i++;
    }
    return (n);
}