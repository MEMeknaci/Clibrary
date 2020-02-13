/*
** EPITECH PROJECT, 2020
** my_isxdigit.c
** File description:
** isxdigit
*/

#include "ctype.h"

int my_isxdigit(int c)
{
    if ((c >= 49 && c <= 57) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return (1);
    return (0);
}