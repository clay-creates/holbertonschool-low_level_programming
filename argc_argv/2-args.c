#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints all arguments
 * @argc: number of arguments
 * @argv: array of argument names
 *
 * Return: return 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
