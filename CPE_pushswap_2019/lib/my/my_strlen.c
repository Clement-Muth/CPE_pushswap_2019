/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_strlen
*/

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i]; ++i);
    return (i);
}