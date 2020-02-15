/*
** EPITECH PROJECT, 2020
** stdlib.h
** File description:
** stdlib
*/

#include <stddef.h>

#ifndef stdlib
#define stdlib

typedef struct my_div_s {
    int quot;
    int rem;
} my_div_t;

typedef struct my_ldiv_s {
    long quot;
    long rem;
} my_ldiv_t;

__extension__ typedef struct my_lldiv_s {
    long long int quot;
    long long int rem;
} my_lldiv_t;

int my_abs(int x);
int my_atoi(const char *str);
long my_labs(long x);
long my_atol(const char *str);
long long my_llabs(long long n);
long long my_atoll(const char *str);
my_div_t my_div(int numer, int denom);
my_ldiv_t my_ldiv(long numer, long denom);
my_lldiv_t my_lldiv(long long numer, long long denom);
char *my_getenv(const char *name);
char *my_itoa(int nbr);
char *my_ltoa(long nbr);
char *my_lltoa(long long nbr);
char *my_ultoa(unsigned long nbr);
void my_free(void *ptr);
void *my_malloc(size_t size);
void *my_calloc(size_t n, size_t size);
void *my_realloc(void *ptr, size_t size);

#endif /* stdlib */