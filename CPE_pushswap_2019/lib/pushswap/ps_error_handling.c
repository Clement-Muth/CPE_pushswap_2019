/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** ps_error_handling
*/

#include "pushswap.h"

int	psErrorHandling(int argc, quicksort *a_sort, _Bool error)
{
    if (argc < 2)
        return (false);
    if (error == false)
        return (false);
    return (check_sorting_list(a_sort) != 0) ? (false) : (true);
}