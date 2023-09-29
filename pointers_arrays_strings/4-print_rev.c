#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, with a newline
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		putchar(*s - 1);
		s--;
	}
	putchar('\n');
}
