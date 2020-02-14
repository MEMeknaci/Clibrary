/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_fmax(double x, double y)
{
    if (x >= y)
        return (x);
    else if (x < y)
        return (y);
    return (0);
}