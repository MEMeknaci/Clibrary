/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_iscntrl(int c)
{
    if ((c >= 0 && c <= 31) || c == 127)
        return (1);
    return (0);
}