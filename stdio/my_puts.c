/*
** EPITECH PROJECT, 2020
** stdio
** File description:
** stdio lib
*/

#include <unistd.h>
#include "stdio.h"

int my_puts(const char *s)
{
    int i = 0;

    for (i = 0; s[i]; i++);
    write(1, s, i);
    write(1, "\n", 1);
    return (0);
}