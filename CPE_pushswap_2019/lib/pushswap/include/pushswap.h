/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** Pushswap
*/

#ifndef PUSHSWAP_H_
#define PUSHSWAP_H_

////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include <unistd.h>

////////////////////////////////////////////////////////////
/// \brief 2-Defined exit error if program's occured an error
///
////////////////////////////////////////////////////////////
#define         EXIT_ERROR      84

////////////////////////////////////////////////////////////
/// \brief 2-Defined limite to radix sort
///
////////////////////////////////////////////////////////////
#define RADIX_LIM 5000

////////////////////////////////////////////////////////////
/// \brief 2-Defined success returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define true 0

////////////////////////////////////////////////////////////
/// \brief 2-Defined failed returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define false 1


////////////////////////////////////////////////////////////
/// \brief 2-Defined success returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define AND &&

////////////////////////////////////////////////////////////
/// \brief 2-Defined failed returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define OR ||


////////////////////////////////////////////////////////////
/// \brief 2-Defined failed returned from boolean evaluation
///
////////////////////////////////////////////////////////////
#define NULL ((void *)0)


////////////////////////////////////////////////////////////
/// \brief 2-component sorting variables
///
////////////////////////////////////////////////////////////
typedef struct quicksort
{
    int numb;
    struct quicksort *next;
    struct quicksort *prev;
} quicksort;

////////////////////////////////////////////////////////////
/// \brief Convert char * to int
///
/// \param str String to convert
/// \param signedInt Negatif number
/// \param error return Boolean evaluation if error occured
///
/// \return int
////////////////////////////////////////////////////////////
int psGetnbr(char *str, int *signedInt, _Bool *error);


////////////////////////////////////////////////////////////
/// \brief Check error handling
///
/// \param argc argument's number
/// \param signedInt Negatif number
/// \param error return Boolean evaluation if error occured
///
/// \return int
////////////////////////////////////////////////////////////
int	psErrorHandling(int argc, quicksort *a, _Bool error);

void psRadixSortFunction(quicksort **a, quicksort **b, int nbneg);

void psQuickSortFunction(int n, quicksort **a, quicksort **b);

quicksort *psIncNumbToLinkedList(quicksort *next, int numb);

int my_put_nbr(int nb);

quicksort *add_top(quicksort *, int);
quicksort *psRemoveTopList(quicksort *);
quicksort *psSwapToA_sort(quicksort *, char *);
quicksort *psRotateToEndA_Sort(quicksort *, char *);
quicksort *psRotateToA_Sort(quicksort *, char *);
quicksort *rra_ra(quicksort *, char *);
quicksort *ra_ra(quicksort *, char *);
void print_liste(quicksort *);
int psLengthList(quicksort *);
int psPushToA_Sort(quicksort **, quicksort **, char *);
int pa_ra(quicksort **, quicksort **, char *);
int ss(quicksort **, quicksort **);
int rr(quicksort **, quicksort **);
int rrr(quicksort **, quicksort **);
int check_sorting_list(quicksort *);
int psPremiceHeighToB(quicksort **, quicksort **, int);
long double psMedian(quicksort *, int);
void radix(quicksort **, quicksort **, int);

#endif /* !PUSHSWAP_H_ */