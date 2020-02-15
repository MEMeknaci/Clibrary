/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

my_lldiv_t my_lldiv(long long numer, long long denom)
{
    my_lldiv_t result = {0};

    result.quot = numer / denom;
    result.rem = numer % denom;
    return (result);
}