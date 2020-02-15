/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

my_ldiv_t my_ldiv(long numer, long denom)
{
    my_ldiv_t result = {0};

    result.quot = numer / denom;
    result.rem = numer % denom;
    return (result);
}