/*
** EPITECH PROJECT, 2019
** fctinter3.c
** File description:
** fctinter3
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

void fct_pointer(va_list ap)
{
    my_putstr("0x");
    convert_hexa(va_arg(ap, unsigned long), 16, 0);
}
