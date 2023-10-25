#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @n: number to compute factorial of
 * Return: if n < 0 return -1, if n == 0 return 1
 * else return the factorial of n;
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}

