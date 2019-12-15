/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_manage_a_list
*/

#include "pushswap.h"

void print_list(quicksort *a_sort)
{
    quicksort *temp;
    quicksort *fillist;

    if (NULL == a_sort)
        return;
    temp = a_sort;
    fillist = a_sort;
    for (; temp->next != fillist; temp = temp->next) {
        my_put_nbr(temp->numb);
    }
    my_put_nbr(temp->numb);
}