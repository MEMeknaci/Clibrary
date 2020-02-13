/*
** EPITECH PROJECT, 2019
** basehexa.c
** File description:
** basehexa
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

unsigned int convert_hexa(unsigned long nb, unsigned int base, int diff)
{
    size_t tmp;
    int i = 1;
    char *str;

    for (tmp = 1; tmp * base < nb; i++)
        tmp *= base;
    str = malloc(sizeof(char) * i + 1);
    str[i + 1] = 0;
    for (int j = 0; j != i; j++) {
        if (nb / tmp < 10)
            str[j] = nb / tmp + 48;
        else if (diff == 0)
            str[j] = nb / tmp + 87;
        else
            str[j] = nb / tmp + 55;
        nb %= tmp;
        tmp /= base;
    }
    my_putstr(str);
    return (0);
}
