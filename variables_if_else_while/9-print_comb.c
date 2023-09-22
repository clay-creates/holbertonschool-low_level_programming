#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{
	int i;

	i = '0';

	while (i <= '9')
	{
		putchar(i + '0');
		i++;

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
