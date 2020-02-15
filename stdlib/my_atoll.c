/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

long long my_atoll(const char *str)
{
    long long s = 1;
    long long r = 0;
    long long i = 0;

    if (str == NULL)
        return (0);
    for (; (*str < '/' || *str > ':') && *str != 0; i++, str += 1);
    if (*(str - 1) == '-' && i > 0)
        s = -1;
    for (;*str != 0 && *str >= '0' && *str <= '9'; str += 1)
        r = (r * 10) + *str - 48;
    r *= s;
    return (r);
}