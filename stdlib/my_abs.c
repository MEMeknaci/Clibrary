/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

int my_abs(int x)
{
    if (x < 0)
        x *= -1;
    return (x);
}