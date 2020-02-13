/*
** EPITECH PROJECT, 2019
** fctinter2.c
** File description:
** fctinter
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

void fct_hexax(va_list ap)
{
    convert_hexa(va_arg(ap, unsigned int), 16, 0);
}

void fct_hexa_upper(va_list ap)
{
    convert_hexa(va_arg(ap, unsigned int), 16, 84);
}

void fct_octal(va_list ap)
{
    convert_base(va_arg(ap, unsigned int), 8);
}

void fct_unsigned(va_list ap)
{
    my_put_unsigned_nbr(va_arg(ap, unsigned int));
}

void fct_nonprintable(va_list ap)
{
    my_put_nonprint(va_arg(ap, char *));
}
