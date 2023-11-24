#include "main.h"
/**
 * _pow - finds the power of a number
 * @n: base
 * @e: exponent
 * Return: power of the number
 */

unsigned int _pow(int n, int e)
{
	int power = 1;
	int i;
	
	for (i = 1; i <= e; ++i)
	{
		power *= n;
	}
	return (power);
}

/**
 * binary_to_uint - converts binary number to unisgned int
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number
 * Or 0 if b is NULL, or it has any char that is not 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, result = 0, len = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[len] != '\0')
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			result += _pow(2, len - i - 1);
		}
	}
	return (result);
}
