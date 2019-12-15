/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_putstrstr
*/

#include <stdio.h>
#include "my.h"

void my_putstrstr(char *tab[])
{
    static int i = 0;

    if (!tab[i])
        return;
    my_putstr(tab[i]);
    ++i;
    return (my_putstrstr(tab));
}