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
    char f_end;

    /*f_i = format[i];*/
    f_end = format[i + 1];

    va_start(args, format);

    while (format)
    {
        while (format[i] != '\0')
        {
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
            if (f_end != '\0')
            {
                printf(", ");
            }
            i++;
        }
        break;
    }

    printf("\n");

    va_end(args);
}