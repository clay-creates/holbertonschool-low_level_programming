#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e'
		&&
		letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
		return (0);
}
