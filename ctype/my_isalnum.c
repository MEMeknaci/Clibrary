/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_isalnum(int c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
    || (c >= 48 && c <= 57))
        return (1);
    return (0);
}