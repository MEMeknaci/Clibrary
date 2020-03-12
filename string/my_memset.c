/*
** EPITECH PROJECT, 2020
** memeknaci libmy
** File description:
** fills n bytes of the memory which is pointed by s
*/

#include <string.h>
#include <stddef.h>

void *my_memset(void *s, int c, size_t n)
{
    for (size_t i = 0; i < n; i++)
        ((char *) s)[i] = c;
    return (s);
}
