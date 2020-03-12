/*
** EPITECH PROJECT, 2020
** my_memcmp.c
** File description:
** memcmp
*/

#include "../include/string.h"
#include <stdlib.h>

int my_memcmp(const void *str1, const void *str2, size_t n)
{
    unsigned char *ptr1 = (unsigned char *) str1;
    unsigned char *ptr2 = (unsigned char *) str2;

    for (int i = 0; i < n; ptr1++, ptr2++, i++)
        if (*ptr1 != *ptr2)
            return (ptr1 < ptr2 ? -1 : 1);
    return (0);
}