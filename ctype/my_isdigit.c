/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_isdigit(int c)
{
    if (c >= 48 && c <= 57)
        return (1);
    return (0);
}