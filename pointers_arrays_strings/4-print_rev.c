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
	int i, j;

	for (i = 0; i < j; i++)
	{
		j = length - 1;
		j--;
		char temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
	reversed[j] = '\0';
	printf("%s\n", reversed);
}
