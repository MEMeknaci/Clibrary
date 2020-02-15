/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

void free(void *ptr);

void my_free(void *ptr)
{
    return (free(ptr));
}