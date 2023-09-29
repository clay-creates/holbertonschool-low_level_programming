#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, with a newline
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int length = strlen(s);
	char reversed[length + 1];
	int i, j;

	for (i = length - 1; j = 0; i >= 0)
	{
		i--;
		j++;
		reversed[j] = s[i];
	}
	reversed[j] = '\0';
	printf("\n");
}
