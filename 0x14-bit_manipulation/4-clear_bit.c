#include "main.h"

/**
 * clear_bit - sets the value of a bit at a given index to 0
 * @n: pointer to the number
 * @index: index
 * Return: 1 if it worked, or -1 if error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;
	*n &= ~m;
	return (1);
}
