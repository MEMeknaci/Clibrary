/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_asin(double sinus)
{
    double asin = 0;

    if (sinus >= -1 && sinus <= 1)
        asin = 1 / sinus;
    return (asin);
}