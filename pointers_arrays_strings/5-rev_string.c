#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string that gets reversed
 */

void rev_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	int start;
	int end;

	start = 0;
	end = i - 1;

	while  (start < end)
	{
		char temp = s[start];
		s[start] = s[end];
		s[end] = temp;

		start++;
		end--;
	}
}
