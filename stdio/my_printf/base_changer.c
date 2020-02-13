/*
** EPITECH PROJECT, 2019
** basechanger.c
** File description:
** basechanger
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

unsigned int convert_base(unsigned int nb, unsigned int base)
{
    int tmp = 0;
    int i = 1;
    char *str;

    for (tmp = 1; tmp * base < nb; i++)
        tmp *= base;
    str = malloc(sizeof(char) * i + 1);
    if (str == NULL)
        return (0);
    str[i + 1] = 0;
    for (int j = 0; j != i; j++) {
        if (nb / tmp < 10)
            str[j] = nb / tmp + 48;
        else
            str[j] = (nb / tmp) + 55;
        nb %= tmp;
        tmp /= base;
    }
    my_putstr(str);
    return (0);
}
