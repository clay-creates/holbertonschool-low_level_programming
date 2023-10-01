#include "main.h"

/**
 * puts2 - prints every other character of a string, followed by newline
 * @str: string to be parsed and printed
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
			i++;
		}

		if (i % 2 != 0 && str[i] == '\0')
		{
			break;
		}
	}
	_putchar('\n');
}
