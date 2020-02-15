/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdio.h"

long long my_llabs(long long n)
{
    if (n < 0)
        n *= -1;
    return (n);
}