/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_radix_sort
*/

#include <stdlib.h>
#include "pushswap.h"

static void psRadixLoop(quicksort **a_sort, quicksort **z_sort, int i,
int *tabInt)
{
    for (int j = 0; j < tabInt[0];)
        (((*a_sort)->numb >> i & 1) == 0) ?
        (psPushToA_Sort(z_sort, a_sort, "pb "),
        tabInt[0] = tabInt[0] - 1, tabInt[1] = tabInt[1] + 1) :
        (*a_sort = psRotateToA_Sort(*a_sort, "ra "), ++j);
}

static void psRadixSecLoop(quicksort **a_sort, quicksort **z_sort, int i,
int *tabInt)
{
    for (int j = 0; j < tabInt[1];)
        (((*z_sort)->numb >> i & 1) == 1) ?
        (psPushToA_Sort(a_sort, z_sort, "pa "),
        tabInt[1] = tabInt[1] - 1, tabInt[0] = tabInt[0] + 1) :
        (*z_sort = psRotateToA_Sort(*z_sort, "rb "), ++j);
}

static void psRadixThirdLoop(quicksort **a_sort, quicksort **z_sort,
int *tabInt)
{
    while (0 < tabInt[1]) {
        psPushToA_Sort(a_sort, z_sort, "pa ");
        tabInt[1] = tabInt[1] - 1;
        tabInt[0] = tabInt[0] + 1;
    }
}

void psRadixSortFunction(quicksort **a_sort, quicksort **z_sort, int signedInt)
{
    int *tabInt = malloc(sizeof(int) * 2);
    if (tabInt == NULL)
        return;
    tabInt[0] = psLengthList(*a_sort);
    tabInt[1] = 0;
    for (int i = 0; i < 31; ++i) {
        psRadixLoop(a_sort, z_sort, i, tabInt);
        psRadixSecLoop(a_sort, z_sort, i, tabInt);
    }
    psRadixThirdLoop(a_sort, z_sort, tabInt);
    for (int i = 0; i < signedInt; ++i) {
        *a_sort = psRotateToEndA_Sort(*a_sort, "rra ");
    }
}