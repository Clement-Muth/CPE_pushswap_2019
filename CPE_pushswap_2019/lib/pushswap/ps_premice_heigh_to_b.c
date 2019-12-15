/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_premice_heigh_to_b
*/

#include "pushswap.h"

int psPremiceHeighToB(quicksort **a_sort, quicksort **z_sort, int n)
{
    int top_half_len = 0;
    long double median = psMedian(*a_sort, n);
    long double a_numb;

    for (int i = 0; n > i; ++i) {
        a_numb = (long double) (*a_sort)->numb;
        (*a_sort != NULL AND a_numb <= median) ?
        (psPushToA_Sort(z_sort, a_sort, "pb "),
        ++top_half_len) : (*a_sort = psRotateToA_Sort(*a_sort, "ra "));
    }
    return (top_half_len);
}