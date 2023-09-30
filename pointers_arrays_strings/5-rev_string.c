#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that gets reversed
 */

void rev_string(char *s)
{
	int i = 0;
	int start = 0;
	int end = i - 1;
	char temp = s[start];

	while (s[i] != '\0')
	{
		i++;
	}

	while  (start < end)
	{
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
