/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

long my_labs(long x)
{
    if (x < 0)
        x *= -1;
    return (x);
}