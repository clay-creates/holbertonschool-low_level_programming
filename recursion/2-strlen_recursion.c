#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to be counted
 * @count: count of characters
 *
 * Return: returns count once recursion is finished
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s == '\0')
	{
		return (count);
	}

	_strlen_recursion(s + 1);
	count++;
}
