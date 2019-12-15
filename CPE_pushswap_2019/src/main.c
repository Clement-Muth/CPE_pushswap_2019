/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** main
*/

#include "../include/my.h"
#include "../include/pushswap.h"
#include <stdlib.h>
#include <unistd.h>

static quicksort *psLinkedListCreate(int numb)
{
    quicksort *current;

    current = malloc(sizeof(quicksort));
    if (current == NULL)
        return (NULL);
    current->numb = numb;
    current->next = current;
    current->prev = current;
    return (current);
}

quicksort *psIncNumbToLinkedList(quicksort *next, int numb)
{
    quicksort *current;

    current = malloc(sizeof(quicksort));
    if (current == NULL)
        return (NULL);
    if (next == NULL) {
        free(current);
        return (psLinkedListCreate(numb));
    }
    current->numb = numb;
    current->next = next;
    current->prev = next->prev;
    next->prev->next = current;
    next->prev = current;
    return (current);
}

quicksort *psListFilling(char *argv[], int argc, int *signedInt, _Bool *error)
{
    quicksort *a_sort = NULL;
    int numb = 0;

    if (2 > argc)
        return (NULL);
    for (; 1 < argc; --argc) {
        numb = psGetnbr(argv[argc - 1], signedInt, error);
        a_sort = psIncNumbToLinkedList(a_sort, numb);
    }
    return (a_sort);
}

int main(int argc, char *argv[])
{
    quicksort *a_sort;
    quicksort *z_sort;
    int signedInt = 0;
    _Bool error = true;

    a_sort = psListFilling(argv, argc, &signedInt, &error);
    if (psErrorHandling(argc, a_sort, error) == false)
        return (EXIT_ERROR);
    (argc <= RADIX_LIM) ?
    psQuickSortFunction(psLengthList(a_sort), &a_sort, &z_sort) :
    psRadixSortFunction(&a_sort, &z_sort, signedInt);
    my_putstr("rra ra\n");
    return (0);
}