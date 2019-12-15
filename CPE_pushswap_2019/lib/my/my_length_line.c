/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_length_line
*/

#include "my.h"

int my_length_line(char *tab)
{
    int i = 0;
    int n = 0;

    for (; tab[i] != _END_LINE_; ++i)
        ++n;
    ++i;
    ++n;
    for (; tab[i] != _END_LINE_ && tab[i] != _END_STR_; ++i);
    return (i - n);
}