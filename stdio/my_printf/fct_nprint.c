/*
** EPITECH PROJECT, 2019
** fctnprint.c
** File description:
** fctnprint
*/

#include "stdio.h"

static int pass(char const *str, int i)
{
    if (str[i] <= 7)
        my_putchar('0');
    if (str[i] < 64)
        my_putchar('0');
    return (0);
}

int my_put_nonprint(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] < 32 || str[i] >= 127) {
            my_putchar('\\');
            pass(str, i);
            convert_base(str[i], 8);
        }
        else
            my_putchar(str[i]);
        i++;
    }
    return (0);
}
