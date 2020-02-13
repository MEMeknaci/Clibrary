/*
** EPITECH PROJECT, 2020
** ctype
** File description:
** ctype lib
*/

#include "ctype.h"

int my_isascii(int c)
{
    if ((unsigned char) c <= 127)
        return (1);
    return (0);
}
