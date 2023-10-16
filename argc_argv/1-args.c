#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints number of arguments passed
 * @argc: number of arguments
 * @argv: array of argument names
 *
 * Return: return 0 on success
 */

int main(int argc, char **argv)
{
	if (argv[0] > 0)
	{
		printf("%d\n", argc);
	}
	return (0);
}
