#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 *			using the binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: first index where value is located, else -1
 */

int binary_search(int *array, size_t size, int value)
{
	int start, end, mid, i;

	if (array == NULL || size < 1)
		return (-1);

	start = 0;
	end = size - 1;

	while (start <= end)
	{
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
		{
			if (i < end)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}
		
		mid = (start + end) / 2;
		if (value == array[mid])
			return (mid);

		else if (value < array[mid])
			end = mid - 1;

		else if (value > array[mid])
			start = mid + 1;
	}

	return (-1);
}
