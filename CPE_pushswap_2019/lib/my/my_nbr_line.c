/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** my_nbr_line
*/

#include "my.h"

int my_nbr_line(char *tab, int i, int line)
{
    return (tab[i] == _END_STR_) ? (line) : my_nbr_line(tab, i + 1,
    line += (tab[i] == _END_LINE_) ? 1 : 0);
}