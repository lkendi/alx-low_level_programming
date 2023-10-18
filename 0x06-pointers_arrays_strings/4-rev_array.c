#include "main.h"
/**
 * reverse_array - reverse the contents of an array of integers
 * @a: array to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}


