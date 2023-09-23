#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 *
 * print_alphabet - prints the alphabet
 *
 *
 * Return: returns 0 on request
 */

void print_alphabet(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');
}
