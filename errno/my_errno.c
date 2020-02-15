/*
** EPITECH PROJECT, 2020
** errno
** File description:
** errno lib
*/

#include "errno.h"
#include <unistd.h>

void putstring(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    write(1, str, i);
}

void my_errno(void)
{
    if (EDOM == 33)
        putstring("EDOM 33\n");
    if (ERANGE == 34)
        putstring("ERANGE 33\n");
    if (EIO == 5)
        putstring("EIO 5\n");
    if (ENAMETOOLONG == 63)
        putstring("ENAMETOOLONG 63\n");
    if (EPERM == 1)
        putstring("EPERM 1\n");
    if (ENETDOWN == 50)
        putstring("ENETDOWN 50\n");
}
