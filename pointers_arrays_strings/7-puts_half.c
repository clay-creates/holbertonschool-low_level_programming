#include "main.h"

/**
 * puts_half - prints half a string, followed by a newline
 * @str: the input passed to function
 */

void puts_half(char *str)
{
	int i = 0;
	int length = _strlen(*str);

	while (str[i] != '\0')
	{
		_putchar(str[length] / 2);
	}
	if (str[i] % 2 != 0)
	{
		_putchar(str[length - 1] / 2);
	}
	_putchar('\n');
}
