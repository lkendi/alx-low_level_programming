#include "main.h"
/**
 * check_squares - check if squares of different numbers equal to n
 * @n: number to find the square root
 * @a: number to square and compare result to n
 * Return: a if a squared = n, else -1
 */

int check_squares(int n, int a)
{
	if (a * a == n)
	{
		return (a);
	}
	/*return -1 if no natural square root*/
	else if (a * a > n)
	{
		return (-1);
	}
	else
	{
		return (check_squares(n, a + 1));
	}
}

/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n : number to square-root
 * Return: natural square root of n
 * else -1 if n doesn't have a natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_squares(n, 0));
}
