/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_fmin(double x, double y)
{
    if (x >= y)
        return (y);
    else if (x < y)
        return (x);
    return (0);
}