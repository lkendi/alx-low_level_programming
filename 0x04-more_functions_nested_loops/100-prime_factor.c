#include <stdio.h>
/**
 * main - print largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long n = 612852475143;
	long i;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%ld\n", i - 1);
	return (0);
}

