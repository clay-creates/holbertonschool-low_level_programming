#include "variadic_functions.h"
#include "stdarg.h"
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
    char *str;

    va_start(ap, n);

    if (space == NULL)
    {
        space = "";
    }

    for (i = 0; i < n; i++)
    {
        str = va_arg(ap, char *);

        if (str == NULL)
        {
            printf("(nil)");
        }
        else
        {
            printf("%s", str);
        }

        if (i < n - 1)
        {
            if (space != NULL)
            {
                printf("%s", space);
            }
            else
            {
                printf(" ");
            }
        }
    }
    va_end(ap);
    printf("\n");
}