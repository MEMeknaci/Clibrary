/*
** EPITECH PROJECT, 2020
** my_isupper.c
** File description:
** isupper
*/

#include "ctype.h"

int my_isupper(int c)
{
    if (c >= 65 && c <= 90)
        return (1);
    return (0);
}