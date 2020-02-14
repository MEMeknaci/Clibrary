/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_cbrt(double value)
{
    double nb = 0;
    for (; (nb * nb * nb) != value; nb++) {
        if (nb >= 2147483647)
            return (-1);
    }
    return (nb);
}