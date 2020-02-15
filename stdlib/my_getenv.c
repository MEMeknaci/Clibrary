/*
** EPITECH PROJECT, 2020
** stdlib
** File description:
** stdlib lib
*/

#include "stdlib.h"
#include "string.h"

static char *get_var(char **envp, int i)
{
    char *envp_var = NULL;
    int count = 0;
    int j = 0;

    for (j = 0; envp[i][j] != '='; j++)
	count++;
    envp_var = my_malloc(sizeof(char) * count + 1);
    if (envp_var == NULL)
        return (NULL);
    for (j = 0; envp[i][j] != '='; j++)
        envp_var[j] = envp[i][j];
    envp_var[j] = 0;
    return (envp_var);
}

char *my_getenv(const char *name)
{
    extern char **environ;
    char *env_var = NULL;
    int j = 0;

    if (name == NULL || environ == NULL)
        return (NULL);
    for(; name[j]; j++);
    for (int i = 0; environ[i]; i++) {
        env_var = get_var(environ, i);
        if (my_memcmp(env_var, name, j) == 0) {
            my_free(env_var);
            return (environ[i] + j + 1);
        }
        my_free(env_var);
    }
    return (NULL);
}