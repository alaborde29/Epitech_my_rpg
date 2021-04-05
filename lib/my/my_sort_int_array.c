/*
** EPITECH PROJECT, 2020
** my_sort_int_array.c
** File description:
** Desc
*/

void my_putchar(char c);

void my_sort_int_array(int * array, int size)
{
    int i;
    int j;
    int k;

    for (i = 0; i < size; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(array + j) < *(array + i)) {
                k = *(array + i);
                *(array + i) = *(array + j);
                *(array + j) = k;
            }
        }
    }
}