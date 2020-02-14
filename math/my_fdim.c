/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_fdim(double x, double y)
{
    double nb = x - y;
    if (nb < 0)
        nb *= -1;
    return (nb);
}