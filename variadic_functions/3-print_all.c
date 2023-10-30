#include "variadic_functions.h"
#include "stdarg.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - function that prints anything input
 * @format: list of types of arguments passed
 */

void print_all(const char *const format, ...)
{
    va_list args;
    int i = 0;
    char *str;

    va_start(args, format);

    while (format && format[i])
    {
        if (!format)
        {
            printf(", ");
        }
        switch (format[i])
        {
        case 'c':
            printf("%c", va_arg(args, int));
            break;
        case 'i':
            printf("%d", va_arg(args, int));
            break;
        case 'f':
            printf("%f", va_arg(args, double));
            break;
        case 's':
            str = va_arg(args, char *);
            if (!str)
            {
                printf("(nil)");
            }
            printf("%s", str);
            break;
        default:
            break;
        }
        i++;
    }

    printf("\n");

    va_end(args);
}