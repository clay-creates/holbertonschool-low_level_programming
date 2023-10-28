#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - add two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the sum of both integers
 */

int op_add(int a, int b)
{
	if (!a)
	{
		a = 0;
		printf("Integer A was NULL, treated as 0 for calc");
		if (!b)
		{
			b = 0;
			printf("Integer B was NULL, treated as 0 for calc");
		}
		return (a + b);
	}
	else
	{
		printf("Integers in op_add were valid");
		return (a + b);
	}
}

/**
 * op_sub - subracts two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns difference of both integers
 */

int op_sub(int a, int b)
{
	if (!a)
	{
		a = 0;
		printf("Integer A was NULL, treated as 0 for calc");
		if (!b)
		{
			b = 0;
			printf("Integer B was NULL, treated as 0 for calc");
		}
		return (a - b);
	}
	else
	{
		printf("Integer in op_sub was valid");
		return (a - b);
	}
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the product of both integers
 */

int op_mul(int a, int b)
{
	if (!a)
	{
		a = 0;
		printf("Integer A was NULL, treated as 0 for calc");
		if (!b)
		{
			b = 0;
			printf("Integer B was NULL, treated as 0 for calc");
		}
		return (a * b);
	}
	else
	{
		printf("Integer in op_mul was valid");
		return (a * b);
	}
}

/**
 * op_div - divides two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the result of division
 */

int op_div(int a, int b)
{
	if (a != 0 || b != 0)
	{
		printf("Integer in op_div was valid");
		return (a / b);
	}
	else
	{
		printf("Integer in op_div was NULL");
		return (1);
	}
}

/**
 * op_mod - modulo operation on two integers
 * @a: integer one
 * @b: integer two
 *
 * Return: returns the remainder of division
 */

int op_mod(int a, int b)
{
	if (a != 0 || b != 0)
	{
		printf("Integer in op_mod was valid");
		return (a % b);
	}
	else
	{
		printf("Integer in op_mod was NULL");
		return (1);
	}
}
