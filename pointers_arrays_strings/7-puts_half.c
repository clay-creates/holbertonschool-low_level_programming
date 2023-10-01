#include "main.h"

/**
 * puts_half - prints half a string, followed by a newline
 * @str: the input passed to function
 */

void puts_half(char *str)
{
	int i;
	int length = _strlen(str);

	if (length % 2 == 0)
	{
		for (i = length, str[i] != '\0'; i++)
			
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = length - 1; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
