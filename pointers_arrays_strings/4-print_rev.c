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
	char reversed;
	int i, j;

	j = 0;
	reversed = length + 1;

	for (i = length - 1; i >= 0;)
	{
		i--;
		j++;
		reversed[j] = s[i];
	}
	reversed[j] = '\0';
	printf("%s\n", reversed);
}
