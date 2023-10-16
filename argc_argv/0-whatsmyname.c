#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point, prints name of program
 * @argc: count of arguements
 * @argv: array of arguement names
 *
 * Return: returns 0 on success
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
