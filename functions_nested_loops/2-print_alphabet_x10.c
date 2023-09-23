#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: returns 0 on request
 */

void print_alphabet_x10(void)
{
	char letter;
	int target;

	letter = 'a';
	target = 0;

	while (target < 10)
	{
		letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}

		target++;
		putchar('\n');
	}
}

