#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an integer array
 * with all ordered values from min to max
 * @min: minimum value in the range
 * @max: maximum value in the range
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int *array;
	unsigned int i, len = 0;

	if (min > max)
	{
		return (NULL);
	}
	len = (max - min) + 1;
	array = malloc(sizeof(int) * len);
	if (array == NULL)
	{
		return (NULL);
	}

	for (i = 0; array[i] <= max; i++)
	{
		array[i] = min;
		min++;
	}
	return (array);
}
