#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - create an array of chars
 * and intialize it with a specific char
 * @size: size of the array
 * @c: char to initialize the array with
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *chars;

	if (size == 0)
	{
		return (NULL);
	}

	chars = malloc(size * sizeof(char));
	if (chars == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		chars[i] = c;
	}
	return (chars);
}
