#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 1 if any of the arguments is not an int
 * else return 0;
 */

int main(int argc, char **argv)
{
	int i, j, sum = 0;
	char *a;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		a = argv[i];
		j = 0;
		while (a[j] != '\0')
		{
			if (!isdigit(a[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		sum += atoi(a);
	}
	printf("%d\n", sum);
	return (0);
}
