/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

void *malloc(size_t size);

void *my_malloc(size_t size)
{
    return (malloc(size));
}