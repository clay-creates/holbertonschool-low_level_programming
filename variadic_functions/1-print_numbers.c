#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - function that prints numbers with newline
 * @space: string to be printed between numbers
 * @n: number of integers passed
 */

void print_numbers(const char *space, const unsigned int n, ...)
{
    unsigned int i;
    va_list ap;

    va_start(ap, n);

    if (space == NULL)
    {
        space = "";
    }

    for (i = 0; i < n; i++)
    {
        printf("%c", ap);
    }
    va_end(ap);
    printf("\n");
}