#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 *			using the linear search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in the array
 * @value: value to search for in the array
 * Return: first index where value is located, else -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size < 1)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}


	/*Element not found*/
	return (-1);

}

