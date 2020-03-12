/*
** EPITECH PROJECT, 2019
** memeknaci lib
** File description:
** my realloc
*/

#include <stdlib.h>
#include "string.h"

void *my_realloc(void *ptr, size_t size)
{
    void *s = malloc(size);

    if (s == NULL)
        return (NULL);
    my_memset(s, 0, size);
    my_memmove(s, ptr, size);
    free(ptr);
    return (s);
}
