/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_round(double value)
{
    int nb = (int) value;
    double cmp = value - nb;
    double data = 0;

    if (cmp >= 0.5) {
        if (value >= 0)
            data = (int) value + 1;
        else
            data = (int) value;
    }
    else if (cmp < 0.5) {
        data = (int) value;
    }
    return (data);
}