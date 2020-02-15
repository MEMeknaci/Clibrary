/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"
#include "string.h"

void *my_realloc(void *ptr, size_t size)
{
    void *mem = my_malloc(size);

    if (!mem || !ptr)
        return NULL;
    my_memmove(mem, ptr, size);
    my_free(ptr);
    return (mem);
}