/*
** EPITECH PROJECT, 2019
** PSU_my_printf_2019
** File description:
** my_strcat
*/

#include "include/my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j]) {
        dest[i] = src[j];
        ++i;
        ++j;
    }
    dest[i] = '\0';
    return (dest);
}