/*
** EPITECH PROJECT, 2019
** my_unsignednbr.c
** File description:
** my_unsignednbr
*/

#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "stdio.h"

unsigned int my_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 10) {
        my_putchar(nb+48);
    }
    if (nb > 9) {
        my_put_unsigned_nbr(nb/10);
        my_put_unsigned_nbr(nb%10);
    }
    return (0);
}
