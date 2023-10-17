#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integers
 * @a: array
 * @n: number of integers in the array to print
 */
void print_array(iny *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
