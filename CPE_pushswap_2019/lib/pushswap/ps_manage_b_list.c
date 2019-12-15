/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_manage_b_list
*/

#include <stdlib.h>
#include "pushswap.h"

quicksort *psRemoveTopList(quicksort *a_list)
{
    quicksort *next;

    (a_list->next == a_list) ? (next = NULL) : (next = a_list->next,
    a_list->prev->next = a_list->next, a_list->next->prev = a_list->prev);
    free(a_list);
    return (next);
}

int psLengthList(quicksort *a_list)
{
    int i = 1;
    quicksort *sortListEnd;

    if (a_list == NULL)
        return (0);
    sortListEnd = a_list;
    a_list = a_list->next;
    for (; a_list != sortListEnd; ++i)
        a_list = a_list->next;
    return (i);
}