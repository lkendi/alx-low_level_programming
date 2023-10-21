#include <stdio.h>
/**
 * main - print largest prime factor
 * Return: Always 0
 */

int main(void)
{
	long long n = 612852475143;
	long long i;

	for (i = 2; n > 1; i++)
	{
		while (n % i == 0)
		{
			n /= i;
		}
	}
	printf("%lld\n", i - 1);
}

