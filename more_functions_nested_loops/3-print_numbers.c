#include "main.h"

/**
 * print_numbers - prints numers 0 to 9 followed by newline
 *
 * Return: returns 0 on success
 */

void print_numbers(void)
{
	int i;

	i = '0';

	while (i <= 9)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
