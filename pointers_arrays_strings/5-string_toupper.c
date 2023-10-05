#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to uppercase
 * 
 * Return: returns upper
 */

char *string_toupper(char *str)
{
	int i;
	char upper;

	for (i = 0; str != '\0';)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			toupper(str[i]);
			upper = str[i];
		}
		upper = str[i];
		i++;
		str++;
	}
	return (upper);
}
