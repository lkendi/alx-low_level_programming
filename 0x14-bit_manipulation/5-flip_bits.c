#include "main.h"
/**
 * flip_bits - flips bits to get from 1 number to another
 * @n: 1st number
 * @m: 2nd number
 * Return: number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int res;
	unsigned int count = 0;

	res = n ^ m;
	while (res != 0)
	{
		count += res & 1;
		res >>= 1;
	}
	return (count);
}
