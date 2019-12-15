/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_revstr
*/

#include <stdlib.h>

char *my_revstr(char *str)
{
    int i = 0;
    int n = 0;
    char tmp;

    for (i = 0; str[i]; i++);
    i--;
    for (i = i; i > n; i--) {
        tmp = str[i];
        str[i] = str[n];
        str[n] = tmp;
        n++;
    }
    return (str);
}