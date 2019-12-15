/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_put_nbr
*/

#include "include/my.h"

int my_put_nbr(int nb)
{
    int n = 1;

    if (nb == (-2147483648))
        my_putstr("-2147483648");
    else {
        if (nb < 0) {
            my_putchar('-');
            nb *= (-1);
        }
        while ((nb / n) >= 10)
            n *= 10;
        while (n > 0) {
            my_putchar((nb / n) % 10 + '0');
            n /= 10;
        }
    }
    return (nb);
}