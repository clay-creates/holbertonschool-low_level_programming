#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{

	int letter;

	letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
