/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** my_ischar
*/

#include "my.h"

_Bool my_ischar(char c)
{
    return (c < '0' || c > '9') ? true : false;
}