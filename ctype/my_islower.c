/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_islower(int c)
{
    if (c >= 97 && c <= 122)
        return (1);
    return (0);
}