#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{
	int num;

	num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
