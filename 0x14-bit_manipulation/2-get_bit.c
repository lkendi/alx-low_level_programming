#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: number
 * @index: index
 * Return: value of the bit at index, or -1 if error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int m;

	if (index > sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	m = 1UL << index;
	if ((n & m) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
