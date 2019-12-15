/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_sort_method_radix
*/

#include "../../include/my.h"
#include "pushswap.h"

quicksort *psSwapToA_sort(quicksort *list, char *letter)
{
    quicksort *temp;
    quicksort *numb;

    if (psLengthList(list) < 2)
        return (list);
    my_putstr(letter);
    numb = list->next;
    temp = numb;
    numb->next = list;
    numb->prev = list->prev;
    list->next = temp->next;
    list->prev = numb;
    return (numb);
}

int psPushToA_Sort(quicksort **a, quicksort **b, char *letter)
{
    if (*b == NULL)
        return (1);
    my_putstr(letter);
    *a = psIncNumbToLinkedList(*a, (*b)->numb);
    *b = psRemoveTopList(*b);
    return (1);
}

quicksort *psRotateToA_Sort(quicksort *a, char *letter)
{
    if (a == NULL)
        return (NULL);
    my_putstr(letter);
    return (a->next);
}

quicksort *psRotateToEndA_Sort(quicksort *a, char *letter)
{
    if (a == NULL)
        return (NULL);
    my_putstr(letter);
    return (a->prev);
}