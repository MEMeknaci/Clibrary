/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"

char *my_ltoa(long nbr)
{
    char *result = NULL;
    long temp = nbr;
    long count = 0;

    for(count = 1; temp >= 10; count++)
        temp = temp / 10;
    result = my_malloc(sizeof(char) * count + 1);
    temp = nbr;
    result[count] = '\0';
    for(count -= 1; count != -1; count--) {
        result[count] = temp % 10 + 48;
        temp = temp / 10;
    }
    return (result);
}