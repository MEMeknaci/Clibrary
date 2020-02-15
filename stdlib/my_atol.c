/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

long my_atol(const char *str)
{
    long s = 1;
    long r = 0;
    long i = 0;

    if (str == NULL)
        return (0);
    for(; (*str < '/' || *str > ':') && *str != 0; i++, str += 1);
    if (i > 0 && *(str - 1) == '-')
        s = -1;
    for(;*str != 0 && *str >= '0' && *str <= '9'; str += 1) {
        r = r * 10;
        r = r + *str - 48;
    }
    r *= s;
    return (r);
}