/*
** EPITECH PROJECT, 2020
** stdio.h
** File description:
** stdio lib
*/

#include <stdarg.h>

#ifndef stdio
#define stdio

int my_putchar(int c);
int puts(const char *s);
int my_remove(char *pathname);
int my_printf(char *s, ...);

// printf fcts prototypes //
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char *str);
char *my_strcat(char *dest, char *src);
unsigned int my_put_unsigned_nbr(unsigned int nb);
unsigned int convert_base(unsigned int number, unsigned int base);
unsigned int convert_hexa(unsigned long nb, unsigned int base, int diff);
int my_put_nonprint(char const *str);
int my_getnbr(char const *str);

typedef struct flags_s {
    char flags;
    void (*fct)(va_list);
} flags_t;

void fct_string(va_list ap);
void fct_char(va_list ap);
void fct_dec(va_list ap);
void fct_mod(va_list ap);
void fct_binary(va_list ap);
void fct_hexax(va_list ap);
void fct_hexa_upper(va_list ap);
void fct_octal(va_list ap);
void fct_unsigned(va_list ap);
void fct_nonprintable(va_list ap);
void fct_pointer(va_list ap);

static const flags_t tab[] = {
    {'s', &fct_string},
    {'c', &fct_char},
    {'d', &fct_dec},
    {'i', &fct_dec},
    {'%', &fct_mod},
    {'b', &fct_binary},
    {'x', &fct_hexax},
    {'X', &fct_hexa_upper},
    {'o', &fct_octal},
    {'u', &fct_unsigned},
    {'S', &fct_nonprintable},
    {'p', &fct_pointer},
    {0}
};

#endif /* stdio */
