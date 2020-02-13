/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_isblank(int c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}