/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_quick_sort
*/

#include "pushswap.h"

static void psPremiceRotateEnd(quicksort **a_sort, int lengthalf)
{
    for (int i = 0; lengthalf > i; ++i)
        *a_sort = psRotateToEndA_Sort(*a_sort, "rra ");
}

static void psPremiceRotate(quicksort **a_sort, int lengthalf)
{
    for (int i = 0; lengthalf > i; ++i)
        *a_sort = psRotateToA_Sort(*a_sort, "ra ");
}

static void psPremicePush(quicksort **a_sort, quicksort **z_sort, int lengthalf)
{
    for (int i = 0; lengthalf > i; ++i)
        psPushToA_Sort(a_sort, z_sort, "pa ");
}

static void psInitA_sort(int lengthalf, quicksort **a_sort)
{
    for (int i = 0; lengthalf > i; ++i)
        *a_sort = psRotateToEndA_Sort(*a_sort, "rra ");
}

void psQuickSortFunction(int length_list, quicksort **a_sort,
quicksort **z_sort)
{
    int lengthalf;

    if (length_list <= 1)
        return;
    lengthalf = psPremiceHeighToB(a_sort, z_sort, length_list);
    psInitA_sort(length_list - lengthalf, a_sort);
    psPremicePush(a_sort, z_sort, lengthalf);
    if (lengthalf == length_list || lengthalf == 0)
        return;
    psQuickSortFunction(lengthalf, a_sort, z_sort);
    psPremiceRotate(a_sort, lengthalf);
    psQuickSortFunction(length_list - lengthalf, a_sort, z_sort);
    psPremiceRotateEnd(a_sort, lengthalf);
}