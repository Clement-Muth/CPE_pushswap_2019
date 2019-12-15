/*
** EPITECH PROJECT, 2019
** PSU_my_sokoban_2019
** File description:
** my_opposite_nbr
*/

int my_opp_nbr(int nbr)
{
    return (nbr < 0) ? ((nbr * nbr) / nbr) : (-nbr);
}