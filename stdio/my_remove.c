/*
** EPITECH PROJECT, 2020
** stdio
** File description:
** stdio lib
*/

#include "stdio.h"
#include <unistd.h>
#include "stdlib.h"
#include <sys/types.h>
#include <sys/wait.h>

static int get_len(char *str)
{
    int i = 0;
    for(; str[i]; i++);
    return (i);
}

static void err(char *str)
{
    write(2, str, get_len(str));
}

static char *concat(char *dest, char *src)
{
    int dest_len = get_len(dest);
    int src_len = get_len(src);
    char *res = my_malloc(sizeof(char ) * (dest_len + src_len +1));
    int y = 0;

    if (res == NULL)
        return (NULL);
    for (;y != dest_len; y++)
        res[y] = dest[y];
    for (int a = 0; y != src_len + dest_len; y++, a++)
        res[y] = src[a];
    res[y] = '\0';
    return (res);
}

int my_remove(char *pathname)
{
    pid_t pid;
    int status = 0;
    char *command = concat("rm -rf ", pathname);
    
    if (access(pathname, F_OK) == 0) {
        pid = fork();
        if (pid == 0)
            execl("/bin/sh", "sh", "-c", command, (char *) NULL);
        else
            waitpid(pid, &status, 0);
    }
    else {
        write(2, pathname, get_len(pathname));
        err(": No such file or directory.\n");
    }
    return (0);
}
