/*
** EPITECH PROJECT, 2019
** memeknaci lib
** File description:
** my memmove
*/

#include "string.h"
#include <stdlib.h>

void my_memmove(void const *dest, void const *src, size_t size)
{
    char *dest_s = (char *) dest;
    char *src_s = (char *) src;
    char *buffer = malloc(sizeof(char) * (size + 1));
    size_t i = 0;

    if (buffer == NULL)
        return;
    for (i = 0; i < size; i++)
        buffer[i] = src_s[i];
    buffer[i] = 0;
    for (i = 0; i < size; i++)
        dest_s[i] = buffer[i];
    free(buffer);
}
