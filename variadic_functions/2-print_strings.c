#include "variadic_functions.h"
#include "varargs.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_strings - function that prints strings with newline
 * @space: string printed between strings
 * @n: number of strings passed to function
 */

void print_strings(const char *space, const unsigned int n, ...)
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
        if (va_arg(ap, char) == NULL)
        {
            printf("(nil)");
        }
        printf("%s", va_arg(ap, char));
    }
    va_end(ap);
    printf("\n");
}