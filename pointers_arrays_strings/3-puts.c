#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by a newline
 * @str: string passed to function to be printed
 */

void _puts(char *str)
{
	char string;

	string = *str;

	printf("%d\n", string);
}
