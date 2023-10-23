#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of the 2 diagonals
 * of a square matrix of integers
 * @a: array/matrix
 * @size: array size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int diag1_sum = 0;
	int diag2_sum = 0;

	for (i = 0; i < size; i++)
	{
		diag1_sum += a[i * size + i];
		diag2_sum += a[i * size + (size - 1 - i)];
	}
	printf("%d, ", diag1_sum);
	printf("%d\n", diag2_sum);
}

