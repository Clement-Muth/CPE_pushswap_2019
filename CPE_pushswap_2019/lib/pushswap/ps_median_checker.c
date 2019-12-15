/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_median_checker
*/

#include "pushswap.h"
#include "../../include/my.h"

int check_sorting_list(quicksort *a_sort)
{
    quicksort *temp;
    quicksort *fillist;

    fillist = a_sort;
    temp = a_sort;
    if (psLengthList(a_sort) <= 1)
        return (1);
    while ((temp->next)->next != fillist) {
        if (temp->numb > (temp->next)->numb)
        return (0);
        temp = temp->next;
    }
    return (temp->numb > (temp->next)->numb) ? (0) : (1);
}

long double psMedian(quicksort *a_sort, int n)
{
    quicksort *temp = a_sort;
    long double median = 0;
    long double numb = (long double) n;

    for (int i = 0; i < n; ++i) {
        median = median + temp->numb;
        temp = temp->next;
    }
    return ((median == 0 OR n == 0) ? 0 : ((median / numb)));
}