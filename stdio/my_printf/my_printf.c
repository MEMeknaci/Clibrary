/*
** EPITECH PROJECT, 2019
** disp_stdarg.c
** File description:
** disp_stdarg
*/

#include "stdio.h"
#include <stdio.h>
#include <stdarg.h>

static void looptab(char *s, int i, va_list ap)
{
    for (int j = 0; tab[j].flags != 0; j++) {
        if (tab[j].flags == s[i]) {
            tab[j].fct(ap);
        }
    }
}

int my_printf(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0; s[i] != 0; i++) {
        if (s[i] == '%') {
            i++;
            looptab(s, i, ap);
        }
        else
            my_putchar(s[i]);
    }
    va_end(ap);
    return (0);
}