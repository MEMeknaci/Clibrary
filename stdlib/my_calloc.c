/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"
#include "string.h"

void *my_calloc(size_t n, size_t size)
{
    void *mem = my_malloc(n * size);

    if (!mem)
        return NULL;
    mem = my_memset(mem, '0', size);
    return (mem);
}
