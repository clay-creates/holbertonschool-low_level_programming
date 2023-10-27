#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * get_op_func - function to select correct funtion to use
 * @s: operator passed as argument to program
 *
 * Return: returns a pointer to function corresponding to operator given as parameter
 */

int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}};

	while (ops[i].op != NULL)
	{
		if (ops[i] == s)
		{
			return (ops[i]);
		}
		i++;
	}
	return (NULL);
}
