#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{
	char letter;
	char letterUpper;

	letter = 'a';
	letterUpper = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	while (letterUpper <= 'Z')
	{
		putchar(letterUpper);
		letterUpper++;
	}

	putchar('\n');
	return (0);
}
