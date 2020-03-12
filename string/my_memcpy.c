/*
** EPITECH PROJECT, 2020
** my_memcpy.c
** File description:
** memcpy
*/

#include <stdlib.h>
#include "../include/string.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    char *dest_c = (char *) dest;
    char *src_c = (char *) src;

    for (int i = 0; i < n; i++, dest_c++, src_c++)
        dest_c[i] = src_c[i];
}