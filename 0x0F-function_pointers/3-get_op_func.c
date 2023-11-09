#include "3-calc.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * get_op_func - selects the correct function to perform specified operation
 * @s: operator passed to the argument
 * Return: pointer to a function that corresponds to the given operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if (*ops[i].op == *s && (s[1] == '\0' || s[2] == '\0'))
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}
