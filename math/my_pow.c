/*
** EPITECH PROJECT, 2020
** math
** File description:
** math lib
*/

#include "math.h"

double my_pow(double value, double power)
{
    double temp = value;

    for (int i = 2; i <= power; i++)
        value *= temp;
    return (value);
}