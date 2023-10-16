#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point, muliplies two numbers
 * @argc: argument count
 * @argv: array of argument names
 *
 * Return: returns 0 on success
 */

int main(int argc, char *argv)
{
	int mult1 = mult(argv[1]);
	int mult2 = mult(argv[2]);

	if (argc < 2)
	{
		printf("Error");
		printf("\n");
		return (1);
	}
	return (0);
}
