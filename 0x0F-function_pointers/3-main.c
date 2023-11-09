#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: number of argments provided in the command line
 * @argv: array containing the command line arguments
 * Return: 0 if successful;
 */

int main(int argc, char **argv)
{
	int a, b, res;
	int (*operation)(int, int);

	/*program, 2 operands, 1 operator*/
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	operation = get_op_func(argv[2]);

	if (!operation)
	{
		printf("Error\n");
		exit(98);
	}
	res = operation(a, b);
	printf("%d\n", res);
	return (0);
}
