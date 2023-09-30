#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by newline
 * @str: string to be parsed and printed
 */

void puts2(char *str)
{
	int i = 0;
	char temp;

	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
