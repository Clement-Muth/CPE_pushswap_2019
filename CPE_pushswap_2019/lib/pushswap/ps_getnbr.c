/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_getnbr
*/

#include "pushswap.h"

static int psStrlen(char *str, _Bool *error)
{
    int i = 0;

    if (NULL == str)
        return (*error = false);
    for (i = 0; str[i]; ++i)
        ((str[i] < '0' || str[i] > '9') AND str[i] != '-') AND
        (*error = false);
    return (i);
}

int psGetnbr(char *str, int *signedInt, _Bool *error)
{
    int numb = 0;
    int pow = 1;

    for (int i = psStrlen(str, error) - 1; i >= 0; --i)
        (str[i] == '-') ? (numb = -numb, *signedInt = + 1) :
        (numb += ((str[i] - '0') * pow), pow *= 10);
    return (numb);
}
