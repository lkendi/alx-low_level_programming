#include "main.h"
/**
 * prime_recursive - checks factors of n from n-1 to 1
 * @n: number to check;
 * @i: number to check divisibility (factors) of n
 * Return: 1 if n is prime, else 0
 */

int prime_recursive(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_recursive(n, i - 1));
}

/**
 * is_prime_number - check if number is a prime number
 * @n: number to check
 * Return: 1 if n is prime, else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_recursive(n, n - 1));
}
