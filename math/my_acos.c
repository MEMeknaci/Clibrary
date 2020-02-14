/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_acos(double cosinus)
{
    double acos = 0;

    if (cosinus >= -1 && cosinus <= 1)
        acos = 1 / cosinus;
    return (acos);
}