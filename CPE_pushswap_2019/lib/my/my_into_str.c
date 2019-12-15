/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_into_str
*/

#include <stdlib.h>
#include <stdio.h>
#include "include/my.h"

char *my_into_str(int nb)
{
    int n = 1;
    int i = 0;
    char *str = malloc(sizeof(char *));

    if (nb == (-2147483648))
        my_putstr("-2147483648");
    else {
        (nb < 0) ? (str[i] = '-', ++i, nb *= (-1)) : 0;
        while ((nb / n) >= 10)
            n *= 10;
        while (n > 0) {
            str[i] = (nb / n) % 10 + '0';
            n /= 10;
            ++i;
        }
    }
    str[i] = '\0';
    return (str);
}