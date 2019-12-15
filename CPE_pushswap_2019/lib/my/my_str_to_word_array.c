/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "include/my.h"

static _Bool my_insert_to_tab(char **tab, char *str, int i)
{
    static int j = 0;
    static int k = 0;

    if (!str[i]) {
        tab[j][k] = _END_STR_;
        tab[j + 1] = NULL;
        return (EXIT_SUCCESS);
    }
    (str[i] == _END_LINE_) ? (tab[j][k] = _END_LINE_, tab[j][k + 1] = _END_STR_,
    ++j, k = 0) : (tab[j][k] = str[i], ++k);
    return (my_insert_to_tab(tab, str, i + 1));
}

static _Bool my_create_tab(char *str, char **tab, _Bool *error)
{
    static int i = 0;

    if (i == my_nbr_line(str, 0, 0)) {
        for (i = 0; str[i] != _END_LINE_ && str[i] != _END_STR_; ++i);
        return (my_insert_to_tab(tab, str, i + 1));
    }
    tab[i] = malloc(sizeof(char) * 10000);
    ++i;
    return (tab[i - 1]) ? (my_create_tab(str, tab, 0)) : (*error = EXIT_FAILED);
}

_Bool my_str_to_word_array(char *filepath, char *tab[], _Bool *error)
{
    char *str = malloc(sizeof(char) * 200000);

    my_open_read(filepath, str, error);
    if (!error)
        return (*error = EXIT_FAILED);
    my_create_tab(str, tab, error);
    if (!error)
        return (*error = EXIT_FAILED);
    return (EXIT_SUCCESS);
}