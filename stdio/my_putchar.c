/*
** EPITECH PROJECT, 2019
** memeknaci libmy
** File description:
** print a character
*/

#include <unistd.h>
#include "stdio.h"

int my_putchar(int c)
{
    write(1, &c, 1);
    return (0);
}
