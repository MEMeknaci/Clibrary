/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

my_div_t my_div(int numer, int denom)
{
    my_div_t result = {0};

    result.quot = numer / denom;
    result.rem = numer % denom;
    return (result);
}