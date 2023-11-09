#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function on each array element
 * @array: array input
 * @size: size of the array
 * @action: function to execute on each element
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned long int i;

	if (array != NULL && size != 0 && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
