/*
** EPITECH PROJECT, 2019
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

int	my_atoi(char const *str)
{
    int s = 1;
    int r = 0;
    int i = 0;

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