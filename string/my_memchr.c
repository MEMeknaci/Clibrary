/*
** EPITECH PROJECT, 2020
** my_memchr.c
** File description:
** memchr
*/

#include "../include/string.h"
#include <stdlib.h>

void *my_memchr(const void *str, int c, size_t n)
{
    for (int i = 0; i < n; (unsigned char *) str++, i++)
        if (*(unsigned char *) str == (unsigned char *) c)
            return ((unsigned char *) str);
    return (0);
}