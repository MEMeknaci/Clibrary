/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

float my_acosf(float cosinus)
{
    float acos = 0;

    if (cosinus >= -1 && cosinus <= 1)
        acos = 1 / cosinus;
    return (acos);
}