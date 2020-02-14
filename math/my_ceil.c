/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_ceil(double value)
{
    double nb = 0;

    if (value >= 0)
        nb = (int) value + 1;
    else
        nb = (int) value;
    return (nb);
}