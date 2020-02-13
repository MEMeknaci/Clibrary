/*
** EPITECH PROJECT, 2020
** my_isspace.c
** File description:
** isspace
*/

#include "ctype.h"

int my_isspace(int c)
{
    if ((c >= 9 && c <= 13) || c == 32)
        return (1);
    return (0);
}