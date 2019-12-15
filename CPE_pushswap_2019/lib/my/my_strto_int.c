/*
** EPITECH PROJECT, 2019
** MUL_my_hunter_2019
** File description:
** my_strto_int
*/

#include "include/my.h"

int my_strto_int(char *str)
{
    int len = my_strlen(str);
    int pow = my_strlen(str) - 1;
    int nb = 0;

    for (int i = 0; i <= len; ++i) {
        nb = str[i] * my_compute_power_rec(10, pow);
        --pow;
    }
    return (nb);
}