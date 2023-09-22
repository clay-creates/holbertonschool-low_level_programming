#include <stdio.h>

/**
 * main - entry point
 *
 * Return: returns 0 on request
 */

int main(void)
{
	int hex_num;
	int hex_char;

	hex_num = '0';
	hex_char = 'a';

	while (hex_num <= '9')
	{
		putchar(hex_num);
		hex_num++;
	}
	while (hex_char <= 'f')
	{
		putchar(hex_char);
		hex_char++;
	}
	putchar('\n');
	return (0);
}
