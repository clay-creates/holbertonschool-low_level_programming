#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * print_rev - prints a string in reverse, with a newline
 * @s: string to be printed in reverse
 */

void print_rev(char *s)
{
	int i, j;
	char *p1, *p2, temp;

	//Get input length
	i = strlen(*s)

	//Set beginning pointer to start of string
	p1 = *s;

	//Set end pointer to end of string
	p2 = *s + i - 1;

	//Swap char from begin to end
	for (j = 0; j < (i - 1) / 2; j++)
	{
		//Swap character
		temp = *p2;
		*p2 = *p1;
		*p1 = temp;

		p1++;
		p2--;
	}
	putchar('\n');
}
