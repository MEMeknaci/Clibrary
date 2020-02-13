/*
** EPITECH PROJECT, 2019
** fctinter.c
** File description:
** fctinter
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

void fct_string(va_list ap)
{
    my_putstr(va_arg(ap, char *));
}

void fct_char(va_list ap)
{
    my_putchar(va_arg(ap, int));
}

void fct_dec(va_list ap)
{
    my_put_nbr(va_arg(ap, int));
}

void fct_mod(va_list ap)
{
    ap = ap;
    my_putchar('%');
}

void fct_binary(va_list ap)
{
    convert_base(va_arg(ap, unsigned int), 2);
}
